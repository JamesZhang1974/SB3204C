/*!
 \file   EyePlotWidget.cpp
 \brief  Eye Scan Plot - Implementation
 \author J Cole-Baker (For Smartest)
 \date   Feb 2016
*/

#include "BertUIPlotEye.h"

/*!
 \brief EyePlotWidget Constructor
 Create a new eye scan plot widget
 \param title    Title of plot - displayed at top
 \param width    Min plot width - pixels
 \param height   Min plot height - pixels
 \param parent   UI Widget which will contain the plot
*/
BertUIPlotEye::BertUIPlotEye( const QString &title,
                              QWidget       *parent )
    : QwtPlot(QwtText(), parent),
      parent(parent)
{
    Q_UNUSED(title)
    //titleLabel()->setFont(QFont( "Arial", 8));

    resize();

    plotLayout()->setAlignCanvasToScales(true);

    QFont titleFont("Arial", 8, 4, false);
    titleLabel()->setFont(titleFont);

    eyeScanPlot = new QwtPlotSpectrogram(QString("Eye Scan"));
    eyeScanPlot->setColorMap(makeColorMap());

    /* FOR CONTOURS:
    contourLevels.clear();
    double countourInterval = (eyeScanData->range().maxValue() - eyeScanData->range().minValue()) / 10.0;
    for (double level = eyeScanData->range().minValue();
                level < eyeScanData->range().maxValue();
                level += countourInterval) contourLevels.append(level);
    eyeScanPlot->setContourLevels(contourLevels);
    eyeScanPlot->pixelHint( QRectF(-0.01, -0.01, 0.01, 0.01));
    eyeScanPlot->setDefaultContourPen(QPen("white"));
    eyeScanPlot->setDisplayMode( QwtPlotSpectrogram::ContourMode, true );
    eyeScanPlot->setDisplayMode( QwtPlotSpectrogram::ImageMode, true );
    */

    eyeScanPlot->attach(this);

    // qDebug() << "Plot Data Range: " << eyeScanData->range().minValue() << " - " << eyeScanData->range().maxValue();

    /////// Axis Titles and Fonts ////////////////////////////////

    // Y Axis (Slice level mV):
    mvScaleDiv.setLowerBound(-250.0);
    mvScaleDiv.setUpperBound( 250.0);
    mvScaleDiv.setTicks(QwtScaleDiv::MajorTick, mvMajTicks);
    mvScaleDiv.setTicks(QwtScaleDiv::MinorTick, mvMinTicks);
    setAxisScaleDiv(QwtPlot::yLeft, mvScaleDiv);
    setAxisFont(QwtPlot::yLeft,QFont("Arial", 7));
    QwtText yAxisTitle("Slice Level (mV)");
    yAxisTitle.setFont(QFont("Arial", 7));
    setAxisTitle(QwtPlot::yLeft, yAxisTitle);

    // X Axis (Phase, in UI):
    uiScaleDiv.setLowerBound(-0.5);
    uiScaleDiv.setUpperBound( 0.5);
    uiScaleDiv.setTicks(QwtScaleDiv::MajorTick, uiMajTicks);
    uiScaleDiv.setTicks(QwtScaleDiv::MinorTick, uiMinTicks);
    setAxisFont(QwtPlot::xBottom,QFont("Arial", 1));
    setAxisScale(QwtPlot::xBottom, -0.5, 0.5 );
    setAxisScaleDiv(QwtPlot::xBottom, uiScaleDiv);

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

    // A color bar on the right axis
    QwtScaleWidget *rightAxis = axisWidget(QwtPlot::yRight);
    rightAxis->setFont(QFont("Arial", 7));
    rightAxis->setColorBarEnabled(true);
    rightAxis->setColorMap( QwtInterval(0.0,1.0), makeColorMap());
    setAxisScale(QwtPlot::yRight, -1.0, 0.0 );
    QwtText colourBarTitle("Log BER");
    setAxisTitle(QwtPlot::yRight, colourBarTitle);
    enableAxis(QwtPlot::yRight);

    replot();


}

BertUIPlotEye::~BertUIPlotEye()
{
    eyeScanPlot->detach();
    delete eyeScanPlot;
}



/*!
 \brief Generate a new linear color map object
 \return pointer to the new color map
*/
QwtLinearColorMap *BertUIPlotEye::makeColorMap()
{
    QwtLinearColorMap *newColorMap;
    newColorMap = new QwtLinearColorMap(Qt::black, Qt::darkRed);
    newColorMap->addColorStop(0.05, Qt::darkBlue);
    newColorMap->addColorStop(0.10, Qt::cyan);
    newColorMap->addColorStop(0.50, Qt::green);
    newColorMap->addColorStop(0.80, Qt::yellow);
    newColorMap->addColorStop(0.90, Qt::red);
    return newColorMap;
}



/*!
 \brief Update the Eye Plot widget to show new data
 \param data  Pointer to an array of doubles containing
              the data. Data are copied so array may be
              deleted after call returns.
              Array represents an x by y matrix of data
              points; it must contain (xRes * yRes) elements

 \param xRes  Number of elements in 'x' axis of data
 \param yRes  Number of elements in 'y' axis of data
*/
void BertUIPlotEye::showData(const QVector<double> &data, int xRes, int yRes)
{
    eyeScanData = new EyeScanData( data,
                                   xRes, yRes,
                                   QwtInterval(   -0.5, 0.5   ),
                                   QwtInterval( -250.0, 250.0 )  );

    QwtScaleWidget *rightAxis = axisWidget(QwtPlot::yRight);
    rightAxis->setColorMap(eyeScanData->range(), makeColorMap());
    setAxisScale(QwtPlot::yRight, eyeScanData->range().minValue(), eyeScanData->range().maxValue() );

    eyeScanPlot->setData(eyeScanData);
    replot();
}


/*!
 \brief Eye Plot clear
 Clear any existing data from the plot
*/
void BertUIPlotEye::clear()
{
    eyeScanPlot->setData(NULL);
    replot();
}


/*!
  \brief Resize the plot to fit neatly inside its parent widget
*/
void BertUIPlotEye::resize()
{
    int width  = parent->geometry().width() - MARGINS_X;
    int height = parent->geometry().height() - MARGINS_Y;
    if (height == 0) height = 1;
    float aspect = ((float)width / (float)height);
    if (aspect > 2.5f) width = (int)((float)height * 2.5f);
    setGeometry(MARGIN_LEFT, MARGIN_TOP, width, height);
}






// =============================================================================================
// Eye Scan Data Class - Implementation
// =============================================================================================


/*!
 \brief Constructor
 Create internal data structures for the EyeScanData
 \param data        Pointer to array of doubles containing source data - see setData
 \param arraySizeX  Data matrix X dimensions - see setData
 \param arraySizeY  Data matrix Y dimensions - see setData
 \param intervalX   X scale interval. Underlying data matrix will be projected
                    on to this scale range in the X dimension
 \param intervalY   Y scale interval. Underlying data matrix will be projected
                    on to this scale range in the Y dimension
*/
EyeScanData::EyeScanData(  const QVector<double> &data,
                           const int arraySizeX,
                           const int arraySizeY,
                           const QwtInterval intervalX,
                           const QwtInterval intervalY  ) : QwtRasterData()
{
    dataArray = NULL;
    setInterval( Qt::XAxis, intervalX );
    setInterval( Qt::YAxis, intervalY );

    plotRangeX = intervalX;
    plotRangeY = intervalY;

    setData(data, arraySizeX, arraySizeY);
}

// Constructor using pointer to raw array instead of QVector
EyeScanData::EyeScanData(  const double *data,
                           const int arraySizeX,
                           const int arraySizeY,
                           const QwtInterval intervalX,
                           const QwtInterval intervalY  ) : QwtRasterData()
{
    dataArray = NULL;
    setInterval( Qt::XAxis, intervalX );
    setInterval( Qt::YAxis, intervalY );

    plotRangeX = intervalX;
    plotRangeY = intervalY;

    setData(data, arraySizeX, arraySizeY);
}



/*!
 \brief Destructor - delete the data and clean up
*/
EyeScanData::~EyeScanData()
{  if (dataArray) delete [] dataArray;  }



/*!
 \brief Copy method
 Copies the EyeScanData object
 \return Copy of the object
 */
QwtRasterData *EyeScanData::copy() const
{
    EyeScanData *clone = new EyeScanData(dataArray, dataSize.x, dataSize.y, plotRangeX, plotRangeY);
    return clone;
}


QwtInterval EyeScanData::range() const
{  return plotDataRange;  }



/*!
 \brief Get a data value for a given (x,y) coordinate
 Coordinates will be in terms of the scale intervals. This
 method looks up the closest value in the underlying data
 matrix and returns it.
 \param   x  Co-ordinate
 \param   y  Co-ordinate
 \return  data
*/
double EyeScanData::value(double x, double y) const
{
    int xpos = (int)((x - plotRangeX.minValue()) / quantization.x);
    int ypos = (int)((y - plotRangeY.minValue()) / quantization.y);
    int pos = arrPos(xpos, ypos);
    double dvalue = dataArray[pos];
    //qDebug() << "-Value request for " << x << "," << y << ": " << dataArray[pos] << " = " << dvalue;
    return dvalue;
}


/*!
 \brief Set up the internal data data structures
 This is called by the constructor. Creates a matrix of data
 points using the supplied input array and matrix dimensions.
 The matrix dimensions are used in conjunction with the
 scale intervals to select sample points when plotting the data.
 \param data   Array of doubles. Must contain
               sizeX * sizeY elements.
 \param sizeX  Data matrix width
 \param sizeY  Data matrix height
*/
void EyeScanData::setData(const QVector<double> &data, const int sizeX, const int sizeY)
{
    dataSize.x = sizeX;
    dataSize.y = sizeY;
    dataArraySize = sizeX * sizeY;
    Q_ASSERT(data.size() == (int)dataArraySize);

    if (dataArray != NULL) delete [] dataArray;
    dataArray = new double [dataArraySize];
    for (int i = 0; i < (int)dataArraySize; i++) dataArray[i] = data[i];
    arrayValueMinMax(dataArray, dataArraySize, &plotDataRange);
    setInterval( Qt::ZAxis, plotDataRange );

    quantization.x = (plotRangeX.maxValue() - plotRangeX.minValue()) / (dataSize.x - 1);
    quantization.y = (plotRangeY.maxValue() - plotRangeY.minValue()) / (dataSize.y - 1);

}

// Set data from a raw array of doubles:
void EyeScanData::setData(const double *data, const int sizeX, const int sizeY)
{
    dataSize.x = sizeX;
    dataSize.y = sizeY;
    dataArraySize = sizeX * sizeY;
    arrayValueMinMax(data, dataArraySize, &plotDataRange);
    setInterval( Qt::ZAxis, plotDataRange );

    if (dataArray != NULL) delete [] dataArray;
    dataArray = new double [dataArraySize];
    memcpy(dataArray, data, dataArraySize * sizeof(double));

    quantization.x = (plotRangeX.maxValue() - plotRangeX.minValue()) / (dataSize.x - 1);
    quantization.y = (plotRangeY.maxValue() - plotRangeY.minValue()) / (dataSize.y - 1);
}


/*!
 \brief Convert x,y coordinate into linear address in array
 Uses global dataSize property to calculate the offset
 \param x   X coordinate
 \param y   Y coordinate
 \return  Linear offset into the array for the given coordinates
*/
size_t EyeScanData::arrPos(const int x, const int y) const
{
    size_t pos = (dataSize.x * y) + x;
    if (pos >= dataArraySize) pos = (dataArraySize-1);
    return pos;
}


/*!
 \brief Search an array of doubles for the minimum and maximum data values
 \param data   Pointer to arry to search
 \param size   Number of elements in the array
 \param range  Pointer to a QwtInterval used to return the min and max values
*/
void EyeScanData::arrayValueMinMax(const double *data, const size_t size, QwtInterval *range)
{
    size_t i;
    double minValue = std::numeric_limits<double>::max();
    double maxValue = std::numeric_limits<double>::min();
    for (i=0; i<size; i++)
    {
        if (data[i] < minValue) minValue = data[i];
        if (data[i] > maxValue) maxValue = data[i];
    }
    range->setMinValue(minValue);
    range->setMaxValue(maxValue);
}



