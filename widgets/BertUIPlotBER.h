/*!
 \file   BERPlotWidget.h
 \brief  Bit Error Ratio Plot - Header
 \author J Cole-Baker (For Smartest)
 \date   Jan 2016
*/


#ifndef BERTUIPLOTBER_H
#define BERTUIPLOTBER_H

#include <QWidget>
#include <QFont>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_scale_draw.h>
#include <qwt_scale_engine.h>
#include <qwt_text_label.h>



/*!
 \brief Custom QwtScaleDraw class to supply custom formatting for Y scale labels
*/
class BERPlotYScaleDraw : public QwtScaleDraw
{
public:
    BERPlotYScaleDraw() : QwtScaleDraw()
    { }

protected:
    QwtText label(double value) const
    {
        // Custom scale formatter:
        return QwtText( QString("%1").arg(value, 0, 'e', 0) );
    }
};




/*!
 \brief Bit Error Ratio Plot widget
 Derived from QwtPlot class. Generates a
 plot of bit error ratio over time.
*/
class BertUIPlotBER : public QwtPlot
{
Q_OBJECT

public:
    explicit BertUIPlotBER(  const QString &title,
                             const int      seconds,
                             const int      logScale,
                             const int      plotIndex,
                             QWidget       *parent  );
    ~BertUIPlotBER();

    void addPoint( const double values );
    void clear();
    void resize();

signals:
public slots:

private:

    static const double LOG_PLOT_FLOOR;

    // Layout Constants:
    static const int MARGIN_TOP    = 0;
    static const int MARGIN_LEFT   = 0;
    static const int MARGIN_BOTTOM = 3;
    static const int MARGIN_RIGHT  = 3;
    static const int MARGINS_X  = MARGIN_LEFT + MARGIN_RIGHT;
    static const int MARGINS_Y  = MARGIN_TOP + MARGIN_BOTTOM;

    const size_t bufferSeconds;
    const int    logScale;

    const QWidget *parent;

    QwtPlotCurve *channelPlot = nullptr;

    // Data series values:
    std::vector<double> xs;
    std::vector<double> ys;

    // Plot Elements: Nb: These are auto-deleted by Qwt so we don't need to delete them.
    BERPlotYScaleDraw *plotScaleDraw;
    QwtScaleEngine *scaleEngineLog = nullptr;

    // Manual control of scale divisions for Y axis (Log BER):
    QwtScaleDiv logberScaleDiv;
    const QList<double> logberMinTicks =   { 1e0, 1e-2, 1e-6, 1e-10, 1e-14  };                           // Tick marks (might not have labels)
    const QList<double> logberMajTicksSm = { 1e0, 1e-4, 1e-8, 1e-12, 1e-16  };                           // Labels when plot is SMALL
    const QList<double> logberMajTicksLg = { 1e0, 1e-2, 1e-4, 1e-6, 1e-8, 1e-10, 1e-12, 1e-14, 1e-16  }; // Labels when plot is LARGE

};

#endif // BERTUIPLOTBER_H
