/*!
 \file   EyePlotWidget.h
 \brief  Eye Scan Plot - Header
 \author J Cole-Baker (For Smartest)
 \date   Feb 2016
*/


#ifndef BERTUIPLOTEYE_H
#define BERTUIPLOTEYE_H

#include <limits>
#include <cstddef>
#include <stdint.h>

#include <QWidget>
#include <QFont>
#include <QLabel>
#include <QString>
#include <QDebug>
#include <QRectF>
#include <QPainter>
#include <QRectF>
#include <QList>
#include <QPixmap>

#include <qwt_plot.h>
#include <qwt_plot_spectrogram.h>
#include <qwt_scale_engine.h>
#include <qwt_text_label.h>
#include <qwt_color_map.h>
#include <qwt_raster_data.h>
#include <qwt_interval.h>
#include <qwt_scale_map.h>
#include <qwt_plot_layout.h>
#include <qwt_scale_widget.h>
#include <qwt_plot_textlabel.h>


/*!
 \brief Eye Scan Data class
 Based on QwtRasterData class; represents the underlying
 data (matrix of double values) for an eye scan plot.
 Data are passed to the constructor, and COPIED internally
 to the object (original array can be deleted after
 constructor returns). Matrix dimensions and scale intervals
 are also passed to the constructor.
 The eye scan plot will project the supplied data matrix
 on to x and y scales with the specified intervals.
*/
class EyeScanData : public QwtRasterData
{
public:
    EyeScanData(  const QVector<double> &data,
                  const int arraySizeX,
                  const int arraySizeY,
                  const QwtInterval intervalX,
                  const QwtInterval intervalY  );

    EyeScanData(  const double *data,
                  const int arraySizeX,
                  const int arraySizeY,
                  const QwtInterval intervalX,
                  const QwtInterval intervalY  );

    ~EyeScanData();

    virtual QwtRasterData *copy() const;
    virtual QwtInterval range() const;
    virtual double value(double x, double y) const;

private:
    double *dataArray = NULL;
    size_t  dataArraySize = 0;

    QwtInterval plotDataRange  = { 0.0, 1.0 };
    QwtInterval plotRangeX     = { 0.0, 1.0 };
    QwtInterval plotRangeY     = { 0.0, 1.0 };


    struct structXY
    {
        double x;
        double y;
    };

    structXY dataSize;
    structXY quantization;

    void    setData(const QVector<double> &data, const int sizex, const int sizey);
    void    setData(const double *data, const int sizeX, const int sizeY);
    size_t  arrPos(const int x, const int y) const;
    void    arrayValueMinMax(const double *data, const size_t size, QwtInterval *range);
};




/*!
 \brief Eye Scan Plot class
*/
class BertUIPlotEye : public QwtPlot
{
    Q_OBJECT
public:
    explicit BertUIPlotEye(const QString &title,
                           QWidget       *parent);
    ~BertUIPlotEye();

    void showData(const QVector<double> &data, int xRes, int yRes);
    void clear();
    void resize();

signals:
public slots:

private:

    // Layout Constants:
    static const int MARGIN_TOP    = 5;
    static const int MARGIN_LEFT   = 65;
    static const int MARGIN_BOTTOM = 3;
    static const int MARGIN_RIGHT  = 5;
    static const int MARGINS_X  = MARGIN_LEFT + MARGIN_RIGHT;
    static const int MARGINS_Y  = MARGIN_TOP + MARGIN_BOTTOM;

    QwtLinearColorMap  *makeColorMap();

    const QWidget      *parent;

    EyeScanData        *eyeScanData = NULL;

    // Plot Elements: Automatically deleted by QWT - don't need to delete.
    QwtPlotSpectrogram *eyeScanPlot = NULL;

    /* FOR CONTOURS:  QList<double> contourLevels; */

    QwtScaleDiv mvScaleDiv;
    const QList<double> mvMajTicks = { -250.0,        -125.0,       0.0,      125.0,       250.0 };
    const QList<double> mvMinTicks = {         -187.5,        -62.5,     62.5,       187.5       };

    QwtScaleDiv uiScaleDiv;
    // DEPRECATED const QList<double> uiMajTicks = { -0.5, -0.25, 0.0, 0.25, 0.5 };
    const QList<double> uiMajTicks = {  };
    const QList<double> uiMinTicks = { -0.5, -0.25, 0.0, 0.25, 0.5 };


};

#endif // BERTUIPLOTEYE_H
