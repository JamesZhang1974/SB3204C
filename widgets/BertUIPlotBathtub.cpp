/*!
 \file   BathtubPlotWidget.cpp
 \brief  Bathtub Plot
 \author J Cole-Baker (For Smartest)
 \date   May 2016
*/

#include <QtMath>

#include "BertUIPlotBathtub.h"
#include "BertUIConsts.h"


/*!
 \brief BathtubPlotWidget Constructor
 Create a new Bit Error Ratio Plot widget
 \param title    Title of plot - displayed at top
 \param width    Plot width - pixels
 \param height   Plot height - pixels
 \param channel  Sets plot appearance - color, thickness, etc
                 Used to make several plots visually distinct; channels are numbered from 1 upwards.
 \param parent   UI Widget which will contain the plot
*/
BertUIPlotBathtub::BertUIPlotBathtub(const QString &title,
                                     const int      channel,
                                     QWidget       *parent)
       : QwtPlot(QwtText(), parent),
         parent(parent)
  {
      Q_UNUSED(title)
      //titleLabel()->setFont(QFont( "Arial", 8));

      resize();

      QPen plotPen;
      plotPen.setColor(BertUIColours::getChannelColourFG(channel));
      plotPen.setWidth(2);

      QBrush plotBrush;
      plotBrush.setColor(BertUIColours::getChannelColourFG(channel));
      plotBrush.setStyle(Qt::Dense6Pattern);

      setAxisScale(QwtPlot::xBottom, -0.5, 0.5);

      channelPlot = new QwtPlotCurve(QString("Bathtub"));
      channelPlot->setBaseline(0.0);
      channelPlot->setPen(plotPen);
      channelPlot->setBrush(plotBrush);
      channelPlot->attach(this);
      channelPlot->setAxes(QwtPlot::xBottom, QwtPlot::yLeft);

      // Y axis: Log BER
      setAxisFont(QwtPlot::yLeft,QFont("Arial", 7));
      QwtText yAxisTitle("Log BER");
      yAxisTitle.setFont(QFont("Arial", 7));
      setAxisTitle(QwtPlot::yLeft, yAxisTitle);
      setAxisScale(QwtPlot::yLeft, -1.0, 0.0);

      // X Axis (Phase, in UI):
      uiScaleDiv.setLowerBound(-0.5);
      uiScaleDiv.setUpperBound( 0.5);
      uiScaleDiv.setTicks(QwtScaleDiv::MajorTick, uiMajTicks);
      uiScaleDiv.setTicks(QwtScaleDiv::MinorTick, uiMinTicks);
      setAxisFont(QwtPlot::xBottom,QFont("Arial", 1));
      setAxisScale(QwtPlot::xBottom, -0.5, 0.5 );
      setAxisScaleDiv(QwtPlot::xBottom, uiScaleDiv);

      /*
      // X axis label: REMOVED to save space
      QwtText xAxisTitle("Phase Offset (UI)");
      xAxisTitle.setFont(QFont("Arial", 7));
      setAxisTitle(QwtPlot::xBottom, xAxisTitle);
      */
      // X axis labels: Inside plot to save space...
      QwtText xAxisTitleL("-0.5 UI");
      QwtText xAxisTitleR("+0.5 UI");
      xAxisTitleL.setFont(QFont("Arial", 7));
      xAxisTitleR.setFont(QFont("Arial", 7));
      xAxisTitleL.setRenderFlags(Qt::AlignLeft | Qt::AlignBottom);
      xAxisTitleR.setRenderFlags(Qt::AlignRight | Qt::AlignBottom);
      QwtPlotTextLabel *xAxisTitleLItem = new QwtPlotTextLabel();
      QwtPlotTextLabel *xAxisTitleRItem = new QwtPlotTextLabel();
      xAxisTitleLItem->setText(xAxisTitleL);
      xAxisTitleRItem->setText(xAxisTitleR);
      xAxisTitleLItem->attach(this);
      xAxisTitleRItem->attach(this);
      replot();
  }


BertUIPlotBathtub::~BertUIPlotBathtub()
{
    channelPlot->detach();
    delete channelPlot;
}



/*!
 \brief Update the Bathtub Plot widget to show new data
 \param data  Pointer to an array of doubles containing
              the data. Data are copied so array may be
              deleted after call returns.
 \param dataSize  Number of elements in data
*/
void BertUIPlotBathtub::showData(const QVector<double> &data)
{
    const double BELOW_DETECTION_LIMIT = -999999.0;
    xs.clear();
    ys.clear();
    double x = -0.5;
    double scaleMin = -1.0;
    for (int i = 0; i < data.size(); i++)
    {
        xs.push_back(x);
        ys.push_back(data[i]);
        x += (1.0/128.0);
        if (data[i] < scaleMin && data[i] > BELOW_DETECTION_LIMIT) scaleMin = data[i];  // TODO: FIX - should be global const!!
    }
    // Round scale min value to next multiple of 0.5 in negative direction:
    double scaleMinRounded = qFloor(scaleMin / 0.5) * 0.5;

    channelPlot->setSamples( &xs[0],
                             &ys[0],
                              ys.size() );
    setAxisScale(QwtPlot::yLeft, scaleMinRounded, 0.0);
    replot();
}

/*!
 \brief Bathtub Plot clear
 Clear any existing data from the plot
*/
void BertUIPlotBathtub::clear()
{
    ys.clear();
    xs.clear();
    channelPlot->setSamples(&xs[0],
                            &ys[0],
                             ys.size() );
    setAxisScale(QwtPlot::yLeft, -1.0, 0.0);
    replot();
}



/*!
  \brief Resize the plot to fit neatly inside its parent widget
*/
void BertUIPlotBathtub::resize()
{
    int width  = parent->geometry().width() - MARGINS_X;
    int height = parent->geometry().height() - MARGINS_Y;
    if (height == 0) height = 1;
    float aspect = ((float)width / (float)height);
    if (aspect > 2.5f) width = (int)((float)height * 2.5f);
    setGeometry(MARGIN_LEFT, MARGIN_TOP, width, height);
}



