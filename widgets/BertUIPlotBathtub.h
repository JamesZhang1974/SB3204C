/*!
 \file   BERPlotWidget.h
 \brief  Bit Error Ratio Plot - Header
 \author J Cole-Baker (For Smartest)
 \date   Jan 2016
*/


#ifndef BERTUIPLOTBATHTUB_H
#define BERTUIPLOTBATHTUB_H

#include <QWidget>
#include <QFont>
#include <QString>
#include <QResizeEvent>

#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_scale_draw.h>
#include <qwt_scale_engine.h>
#include <qwt_text_label.h>
#include <qwt_plot_textlabel.h>

/*!
 \brief Custom QwtScaleDraw class to supply custom formatting for Y scale labels
*
class BathtubPlotYScaleDraw : public QwtScaleDraw
{
public:
    BathtubPlotYScaleDraw() : QwtScaleDraw()
    { }

protected:
    QwtText label(double value) const
    {
        // Custom scale formatter:
        return QwtText( QString("%1").arg(value, 0, 'e', 0) );
    }
};
*/



/*!
 \brief Bathtub Plot widget
 Derived from QwtPlot class.
*/
class BertUIPlotBathtub : public QwtPlot
{
Q_OBJECT

public:
    explicit BertUIPlotBathtub(const QString &title,
                               const int      channel,
                               QWidget       *parent);
    ~BertUIPlotBathtub();

    void showData(const QVector<double> &data);
    void clear();
    void resize();

signals:
public slots:

private:

    // Layout Constants:
    static const int MARGIN_TOP    = 5;
    static const int MARGIN_LEFT   = 65;
    static const int MARGIN_BOTTOM = 3;
    static const int MARGIN_RIGHT  = 65;
    static const int MARGINS_X  = MARGIN_LEFT + MARGIN_RIGHT;
    static const int MARGINS_Y  = MARGIN_TOP + MARGIN_BOTTOM;

    const QWidget *parent;

    QwtPlotCurve *channelPlot = nullptr;

    QwtScaleDiv uiScaleDiv;
    // REMOVED to save space: Axis labels: const QList<double> uiMajTicks = { -0.5, -0.25, 0.0, 0.25, 0.5 };
    const QList<double> uiMajTicks = {  };
    const QList<double> uiMinTicks = { -0.5, -0.25, 0.0, 0.25, 0.5 };

    // Data series values:
    std::vector<double> xs;
    std::vector<double> ys;

};

#endif // BERTUIPLOTBATHTUB_H
