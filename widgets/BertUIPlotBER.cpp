/*!
 \file   BERPlotWidget.cpp
 \brief  Bit Error Ratio Plot
 \author J Cole-Baker (For Smartest)
 \date   Jan 2016
*/


#include "BertUIPlotBER.h"
#include "BertUIConsts.h"

const double BertUIPlotBER::LOG_PLOT_FLOOR = 1e-16;


/*!
 \brief BERPlotWidget Constructor
 Create a new Bit Error Ratio Plot widget
 \param title      Title of plot - displayed at top
 \param width      Plot width - pixels
 \param height     Plot height - pixels
 \param seconds    Max number of seconds to display on plot.
                   The plot will start at second 1 (left),
                   and move across as data points are added.
                   When the specified number of seconds is
                   reached, the plot will start to scroll
                   left as points are added.
 \param logScales  Use log scales for y axes (boolean)
 \param channel    Sets plot appearance - color, thickness, etc
                   Used to make several plots visually distinct;
                   channel must be 1 to 4.
 \param parent   UI Widget which will contain the plot
*/
BertUIPlotBER::BertUIPlotBER(  const QString &title,
                               const int      seconds,
                               const int      logScale,
                               const int      channel,
                               QWidget       *parent  )
       : QwtPlot(QwtText(), parent),
         bufferSeconds((size_t)seconds),
         logScale(logScale),
         parent(parent)
  {
      //QFont titleFont("Arial", 8, 4, false);  // Old font: "MS Shell Dlg 2"
      //titleLabel()->setFont(titleFont);
      //setTitle(...)
      Q_UNUSED(title)

      resize();

      QPen plotPen;
      plotPen.setColor(BertUIColours::getChannelColourFG(channel));
      plotPen.setWidth(2);

      QBrush plotBrush;
      plotBrush.setColor(BertUIColours::getChannelColourFG(channel));
      plotBrush.setStyle(Qt::Dense6Pattern);

      setAxisScale(QwtPlot::xBottom, 1.0, (float)seconds);

      double baseLine;
      if (logScale)
      {
          logberScaleDiv.setLowerBound(1e-16);
          logberScaleDiv.setUpperBound(1e0);
          logberScaleDiv.setTicks(QwtScaleDiv::MajorTick, logberMajTicksSm);
          logberScaleDiv.setTicks(QwtScaleDiv::MinorTick, logberMinTicks);

          scaleEngineLog = new QwtLogScaleEngine();
          setAxisScaleEngine(QwtPlot::yLeft, scaleEngineLog);
          setAxisScale(QwtPlot::yLeft, 1e-16, 1.0);
          setAxisScaleDiv(QwtPlot::yLeft, logberScaleDiv);

          baseLine = LOG_PLOT_FLOOR;
      }
      else
      {
          baseLine = 0.0;
      }
      plotScaleDraw = new BERPlotYScaleDraw();
      setAxisScaleDraw(QwtPlot::yLeft, plotScaleDraw);

      setAxisFont(QwtPlot::yLeft,QFont("Arial", 7));

      // Generate X axis values:
      double x = 1.0;
      for (size_t i = 0; i < bufferSeconds; i++)
      {
          xs.push_back(x);
          x += 1.0;
      }

      channelPlot = new QwtPlotCurve( QString("BER") );
      channelPlot->setBaseline(baseLine);
      channelPlot->setPen(plotPen);
      channelPlot->setBrush(plotBrush);
      channelPlot->attach(this);
      channelPlot->setAxes(QwtPlot::xBottom, QwtPlot::yLeft);
      enableAxis(QwtPlot::xBottom, false);
      replot();
  }


BertUIPlotBER::~BertUIPlotBER()
{
}




/*!
 \brief Add a data point to the BER Plot
 \param value   Instantaneous Error Ratio
*/
void BertUIPlotBER::addPoint(const double value)
{
    // Add a new data point to the Y series:
    double valueUse;
    valueUse = value;
    if (logScale)
    {
        // If log scales used, can't show "0.0". Clip at LOG_PLOT_FLOOR:
        if (valueUse < LOG_PLOT_FLOOR) valueUse = LOG_PLOT_FLOOR;
    }
    ys.push_back( valueUse );
    size_t nSeconds = ys.size();
    if (nSeconds >= bufferSeconds) ys.erase(ys.begin());
    // Update the plot data series:
    channelPlot->setSamples(&xs[0],
                            &ys[0],
                             ys.size());
    // Redraw:
    replot();
}


/*!
 \brief Clear the plot data
*/
void BertUIPlotBER::clear()
{
    ys.clear();
    replot();
}



/*!
  \brief Resize the plot to fit neatly inside its parent widget
*/
void BertUIPlotBER::resize()
{
    int width  = parent->geometry().width() - MARGINS_X;
    int height = parent->geometry().height() - MARGINS_Y;
    float aspect = ((float)width / (float)height);
    if (aspect < 2.6f) height = (int)((float)width / 2.6f);
    // Set up Y axis scale labels, depending on plot height:
    if (height > 150)  logberScaleDiv.setTicks(QwtScaleDiv::MajorTick, logberMajTicksLg);  // Large plot; Show more labels
    else               logberScaleDiv.setTicks(QwtScaleDiv::MajorTick, logberMajTicksSm);  // Small plot; Fewer labels
    setAxisScaleDiv(QwtPlot::yLeft, logberScaleDiv);
    replot();
    setGeometry(MARGIN_LEFT, MARGIN_TOP, width, height);
}


