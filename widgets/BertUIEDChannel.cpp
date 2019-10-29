#include "BertUIEDChannel.h"
#include <QResizeEvent>

BertUIEDChannel::BertUIEDChannel(const QString &name,
                                 QWidget *parent,
                                 int channel,
                                 int lane,
                                 int x,
                                 int y,
                                 int minWidth,
                                 int minHeight)
    : BertUIGroup(name, parent, QString("Channel %1:").arg(channel), lane, x, y, 0, 0),
      channel(channel),
      lane(lane)
{
    // ---------- One ED Channel: ----------------------------------------------
    setMinimumWidth(minWidth);
    setMinimumHeight(minHeight);

    // ED Channel Enable Checkbox: Not included in our layout; parent will retrieve it and add to their layout.
    boolEDEnable = new BertUICheckBox(QString("boolEDEnable_%1").arg(lane), parent, QString("Enable Channel %1").arg(channel), lane, 0, 0, 101);

    //makeUINormal();
    makeUICompact();

    // ----------------------------------------------------------------------
    // Connect signals from child widgets to make one set of signals for parent widget:
    connect(boolEDEnable,        SIGNAL(clicked(bool)),            this, SLOT(boolEDEnable_clicked(bool)));
    connect(listEDPattern,       SIGNAL(currentIndexChanged(int)), this, SLOT(listEDPattern_currentIndexChanged(int)));
    connect(boolEDPatternInvert, SIGNAL(clicked(bool)),            this, SLOT(boolEDPatternInvert_clicked(bool)));
    connect(listEDEQBoost,       SIGNAL(currentIndexChanged(int)), this, SLOT(listEDEQBoost_currentIndexChanged(int)));
    connect(buttonEDInjectError, SIGNAL(clicked()),                this, SLOT(buttonEDInjectError_clicked()));
}

BertUIEDChannel::~BertUIEDChannel()
{
  if (plot) delete plot;
}

/* // DEPRECATED
// ====== ALTERNATE LAYOUTS: ==========================================================================
void BertUIEDChannel::makeUINormal()
{
    int xx = 10; int yy = 19;
    boolEDEnable        = new BertUICheckBox (QString("boolEDEnable_%1").arg(lane),        this, "Enable PRBS Checker", lane, xx,      yy, 130);
    listEDPattern       = new BertUIList     (QString("listEDPattern_%1").arg(lane),       this, QStringList(),         lane, xx+=135, yy, 75 );
    boolEDPatternInvert = new BertUICheckBox (QString("boolEDPatternInvert_%1").arg(lane), this, "Invert",              lane, xx+=85,  yy, 60 );
    labelEDEQBoost      = new BertUILabel    ("",                                          this, "EQ Boost",            lane, xx+=70,  yy, 53 );
    listEDEQBoost       = new BertUIList     (QString("listEDEQBoost_%1").arg(lane),       this, QStringList(),         lane, xx+=55,  yy, 65 );
    buttonEDInjectError = new BertUIButton   (QString("buttonEDInjectError_%1").arg(lane), this, "Inject Errors",       lane, xx+=75,  yy, 90 );
    xx = 13; yy = 58;
    lampDataLock        = new BertUILamp     (QString("lampDataLock_%1").arg(lane),        this, "Data OK", "No Data", BertUILamp::ERR, lane, xx,      yy, 51 );
    lampCDRLock         = new BertUILamp     (QString("lampCDRLock_%1").arg(lane),         this, "Lock",    "No Lock", BertUILamp::ERR, lane, xx+=56,  yy, 51 );
    xx = 6; yy = 95;
    new                       BertUILabel    ("",                                          this, "Errors",              lane, xx, yy,     37 );
    new                       BertUILabel    ("",                                          this, "Bits",                lane, xx, yy+=30, 37 );
    new                       BertUILabel    ("",                                          this, "BER",                 lane, xx, yy+=30, 37 );
    xx = 45; yy = 95;
    valueBERErrors      = new BertUITextInfo (QString("valueBERErrors_%1").arg(lane),      this, "0",                   lane, xx, yy,     81 );
    valueBERBits        = new BertUITextInfo (QString("valueBERBits_%1").arg(lane),        this, "0",                   lane, xx, yy+=30, 81 );
    valueBER            = new BertUITextInfo (QString("valueBER_%1").arg(lane),            this, "0",                   lane, xx, yy+=30, 81 );
    lampErrorFlasher    = new BertUILamp     (QString("lampErrorFlasher_%1").arg(lane),    this, "", "ERROR", BertUILamp::ERR, lane, xx, yy+=30, 81 );

    frameBERPlot = new BertUIPane (QString("frameBERPlot_%1").arg(lane), this, lane, BER_PLOT_X, BER_PLOT_Y, 0, 0);
    frameBERPlot->setMinimumWidth(BER_PLOT_W);
    frameBERPlot->setMinimumHeight(BER_PLOT_H);

    plot = new BertUIPlotBER(QString("ED Channel %1 - BER vs Time (Last 20 seconds)").arg(channel),
                             20,
                             -1,
                             channel,
                             frameBERPlot);
    plot->showMaximized();
}
// ====================================================================================================================
*/

void BertUIEDChannel::makeUICompact()
{
    int vGrid = 28;

    BertUIPane *frameCtrls = new BertUIPane("", this, lane, 0, 0, 0, 0);
    frameCtrls->setMinimumWidth(71);
    frameCtrls->setMaximumWidth(71);
    int x = 0; int y = 10;
    boolEDPatternInvert = new BertUICheckBox (QString("boolEDPatternInvert_%1").arg(lane), frameCtrls, "Invert",        lane, x,  y,        70 );
    listEDPattern       = new BertUIList     (QString("listEDPattern_%1").arg(lane),       frameCtrls, QStringList(),   lane, x,  y+=vGrid, 70 );
    listEDEQBoost       = new BertUIList     (QString("listEDEQBoost_%1").arg(lane),       frameCtrls, QStringList(),   lane, x,  y+=vGrid, 70 );

    BertUIPane *frameLamps = new BertUIPane("", this, lane, 0, 0, 0, 0);
    frameLamps->setMinimumWidth(55);
    frameLamps->setMaximumWidth(55);
    x = 0; y = 0; vGrid = 28;
    lampDataLock        = new BertUILamp     (QString("lampDataLock_%1").arg(lane),        frameLamps, "Data OK", "No Data", BertUILamp::ERR, lane, x, y,        54 );
    lampCDRLock         = new BertUILamp     (QString("lampCDRLock_%1").arg(lane),         frameLamps, "Lock",    "No Lock", BertUILamp::ERR, lane, x, y+=vGrid, 54 );
    buttonEDInjectError = new BertUIButton   (QString("buttonEDInjectError_%1").arg(lane), frameLamps, "Inject\nError",                       lane, x, y+=vGrid, 55, 36);

    BertUIPane *frameErrs = new BertUIPane("", this, lane, 0, 0, 0, 0);
    frameErrs->setMinimumWidth(106);
    frameErrs->setMaximumWidth(106);
    x = 0; y = 0; vGrid = 30;
    new                       BertUILabel    ("",                                          frameErrs, "Error",                               lane, x, y,        33 );
    lampErrorFlasher    = new BertUILamp     (QString("lampErrorFlasher_%1").arg(lane),    frameErrs, "", "Error", BertUILamp::ERR,          lane, x, y,        33 );
    new                       BertUILabel    ("",                                          frameErrs, "Bits",                                lane, x, y+=vGrid, 33 );
    new                       BertUILabel    ("",                                          frameErrs, "BER",                                 lane, x, y+=vGrid, 33 );
    x = 36; y = 0;
    valueBERErrors      = new BertUITextInfo (QString("valueBERErrors_%1").arg(lane),      frameErrs, "0",                                   lane, x, y,        65 );
    valueBERBits        = new BertUITextInfo (QString("valueBERBits_%1").arg(lane),        frameErrs, "0",                                   lane, x, y+=vGrid, 65 );
    valueBER            = new BertUITextInfo (QString("valueBER_%1").arg(lane),            frameErrs, "0",                                   lane, x, y+=vGrid, 65 );

    frameBERPlot = new BertUIPane (QString("frameBERPlot_%1").arg(lane), this, lane, 0, 0, 0, 0);
    frameBERPlot->setMinimumWidth(160);
    frameBERPlot->setMinimumHeight(100);

    plot = new BertUIPlotBER("BER vs Time",
                             20,
                             -1,
                             channel,
                             frameBERPlot);
    plot->show();

    // Layout:
    QHBoxLayout *layoutEDItems = new QHBoxLayout(this);
    layoutEDItems->addWidget(frameCtrls);
    layoutEDItems->addWidget(frameLamps);
    layoutEDItems->addWidget(frameErrs);
    layoutEDItems->addWidget(frameBERPlot);

}
// ====================================================================================================================





void BertUIEDChannel::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event)
    plot->resize();
}


void BertUIEDChannel::setState(EDChannelState state)
{
    bool enabled = false;
    if (state != DISABLED) enabled = true;

    listEDPattern->setEnabled(enabled);
    boolEDPatternInvert->setEnabled(enabled);
    listEDEQBoost->setEnabled(enabled);
    valueBERBits->setEnabled(enabled);
    valueBERErrors->setEnabled(enabled);
    valueBER->setEnabled(enabled);
    lampErrorFlasher->setState(BertUILamp::OFF);
    lampDataLock->setState(BertUILamp::ERR);
    lampCDRLock->setState(BertUILamp::ERR);
    lampDataLock->setEnabled(enabled);
    lampCDRLock->setEnabled(enabled);
    frameBERPlot->setEnabled(enabled);
    valueBERBits->setEnabled(enabled);
    valueBERErrors->setEnabled(enabled);
    valueBER->setEnabled(enabled);
    buttonEDInjectError->setEnabled(false);
    if (enabled)
    {
        setWhite(valueBERBits, NULL );
        setWhite(valueBERErrors, NULL );
        setGreen(valueBER, NULL );
    }
    else
    {
        setGrey(valueBERBits, "0" );
        setGrey(valueBERErrors, "0" );
        setGrey(valueBER, "0");
    }

    switch (state)
    {
    case STOPPED:
            boolEDEnable->setEnabled(true);
            buttonEDInjectError->setEnabled(false);
            if (boolEDEnable->isChecked())
            {
                listEDPattern->setEnabled(true);
                boolEDPatternInvert->setEnabled(true);
            }
        break;
    case RUNNING:
        boolEDEnable->setEnabled(false);
        listEDPattern->setEnabled(false);
        boolEDPatternInvert->setEnabled(false);
        if (boolEDEnable->isChecked())
        {
            buttonEDInjectError->setEnabled(true);
            setGreen(valueBER, QString("%1").arg(0.0, 0, 'e', 3));
        }
        break;
    default:
        break;
    }

}

void BertUIEDChannel::setEDSignalLock(bool locked)  // If true, sets the LOS lamp to "OK"
{
    if (locked) lampDataLock->setState(BertUILamp::OK);
    else        lampDataLock->setState(BertUILamp::ERR);
}

void BertUIEDChannel::setEDCDRLock(bool locked)    // If true, sets the LOL lamp to "OK"
{
    if (locked) lampCDRLock->setState(BertUILamp::OK);
    else        lampCDRLock->setState(BertUILamp::ERR);
}

void BertUIEDChannel::setEDErrorFlasher(bool on)    // If true, sets the error lamp to "ON"
{
    if (on) lampErrorFlasher->setState(BertUILamp::ERR);
    else    lampErrorFlasher->setState(BertUILamp::OFF);
}


void BertUIEDChannel::setEDValueBits(double bits)
{
    valueBERBits->setText(formatCount(bits));
}

void BertUIEDChannel::setEDValueErrors(double errors)
{
    valueBERErrors->setText(formatCount(errors));
}

void BertUIEDChannel::setEDValueBER(double errorRatio)
{
    if (errorRatio > 10E-12) setRed   (valueBER, formatRate(errorRatio));
    else                     setGreen (valueBER, formatRate(errorRatio));
}


/*!
 \brief Format a Bit or Error Count for dislay
 \param count  Value to format
 \return QString containing formatted value
*/
QString BertUIEDChannel::formatCount(double count)
{
    if (count < 10000) return QString("%1").arg(count);
    else               return QString("%1").arg(count, 0, 'e', 3);
}


/*!
 \brief Format a error rate for dislay
 \param rate  Value to format
 \return QString containing formatted value
*/
QString BertUIEDChannel::formatRate(double rate)
{
    return QString("%1").arg(rate, 0, 'e', 3);
}



void BertUIEDChannel::setRed(QLabel *item, QString text)
{
    item->setStyleSheet("border: 1px solid black; background-color: rgb(255, 96, 96);");
    if (NULL != text) item->setText(text);
}

void BertUIEDChannel::setGreen(QLabel *item, QString text)
{
    item->setStyleSheet("border: 1px solid black; background-color: rgb(170, 255, 127);");
    if (NULL != text) item->setText(text);
}

void BertUIEDChannel::setGrey(QLabel *item, QString text)
{
    item->setStyleSheet("border: 1px solid black; background-color: rgb(240, 240, 240);");
    if (NULL != text) item->setText(text);
}

void BertUIEDChannel::setWhite(QLabel *item, QString text)
{
    item->setStyleSheet("border: 1px solid black; background-color: rgb(255, 255, 255);");
    if (NULL != text) item->setText(text);
}

