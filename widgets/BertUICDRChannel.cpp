#include "BertUICDRChannel.h"

#include "BertUILabel.h"

BertUICDRChannel::BertUICDRChannel(const QString &name,
                                   QWidget *parent,
                                   int core,
                                   int x,
                                   int y,
                                   int minWidth,
                                   int minHeight)
    : BertUIGroup(name, parent, "Clock Recovery Mode", core, x, y, 0, 0),
      core(core)
{
    // ---------- One ED Channel: ----------------------------------------------
    setMinimumWidth(minWidth);
    setMinimumHeight(minHeight);

    QString     channelLabel;
    QStringList inputSelectLabels;
    QStringList dataRateOptions = {"28.125Gb/s","28.05Gb/s","27.95Gb/s","27.03Gb/s","26.56Gb/s","26.31Gb/s",
                                   "25.78Gb/s","25.00Gb/s","14.025Gb/s","12.50Gb/s","7.25Gb/s","6.25Gb/s"};
    QStringList targetLBWOptions = {"5MHz","7MHz","9MHz","11MHz","13MHz","15MHz","17MHz","19MHz","21MHz",
                                   "23MHz","25MHz"};
    QStringList rateDependencyOptions = {"Rate Dependent","Rate Independent"};
    QStringList rateDividerOptions = {"Rate/1667","Rate/2500"};

    switch (core)
    {
    case 0:
        channelLabel = QString("Clock Recovery 1/2");
        inputSelectLabels = QStringList({"ED1", "ED2"});
        break;
    case 1:
    default:
        channelLabel = QString("Clock Recovery 3/4");
        inputSelectLabels = QStringList({"ED3", "ED4"});
        break;
    }

    this->setTitle(channelLabel);

    int vGrid = 35;
    int xx = 16; int yy = 30;
    new    BertUILabel    ("",  this, "Source",               -1, xx,   yy,         135);
    new    BertUILabel    ("",  this, "Data Rate",            -1, 300,  yy,         135);
    new    BertUILabel    ("",  this, "Recovered Clock Output",      -1, 600,  yy,         135);
    new    BertUILabel    ("",  this, "Data Lock",            -1, xx,   yy+=vGrid,  135);
    new    BertUILabel    ("",  this, "Loop Bandwidth(LBW)",  -1, 300,  yy,         135);
    new    BertUILabel    ("",  this, "CDR Lock",             -1, xx,   yy+=vGrid,  135);
    new    BertUILabel    ("",  this, "Rate Divider",         -1, 300,  yy,         135);
    new    BertUILabel    ("",  this, "Target LBW",           -1, 300,  yy+=vGrid,  135);



    xx = 146; yy = 30;
    listCDRChannelSelect    = new BertUIList     (QString("listCDRChannelSelect_%1").arg(core),    this, inputSelectLabels,  -1, xx,     yy,       101);
    listDataRateSelect      = new BertUIList     (QString("listDataRateSelect_%1").arg(core),      this, dataRateOptions,    -1, 446,    yy,       101);
    listCDRDivideRatio      = new BertUIList     (QString("listCDRDivideRatio_%1").arg(core),      this, QStringList(),      -1, 746,    yy,       101);
    lampDataLock            = new BertUILamp     (QString("lampCDRMDataLock_%1").arg(core),        this, "Data OK", "No Data", BertUILamp::ERR, -1, xx, yy+=vGrid, 60 );
    listLoopBandwidthSelect = new BertUIList     (QString("listLoopBandwidthSelect_%1").arg(core), this, rateDependencyOptions , -1, 446,    yy,        101);
    lampCDRLock             = new BertUILamp     (QString("lampCDRMCDRLock_%1").arg(core),         this, "Lock",    "No Lock", BertUILamp::ERR, -1, xx, yy+=vGrid, 60 );
    listRateDividerSelect   = new BertUIList     (QString("listRateDividerSelect_%1").arg(core),   this, rateDividerOptions,     -1, 446,    yy,        101);
    listTargetLBWSelect     = new BertUIList     (QString("listTargetLBWSelect_%1").arg(core),     this, targetLBWOptions,       -1, 446,    yy+=vGrid, 101);



    lampDataLock->setVisible(false);
    lampCDRLock->setVisible(false);
    if(listLoopBandwidthSelect->currentIndex() == 0)
    {
         listTargetLBWSelect ->setEnabled(false);
         listRateDividerSelect->setEnabled(true);
    }
    else
    {
        listTargetLBWSelect ->setEnabled(true);
        listRateDividerSelect->setEnabled(false);
    }
    // ----------------------------------------------------------------------
    // Connect signals from child widgets to make one set of signals for parent widget:
    connect(listCDRChannelSelect,    SIGNAL(currentIndexChanged(int)), this, SLOT(listCDRChannelSelect_currentIndexChanged(int)));
    connect(listCDRDivideRatio,      SIGNAL(currentIndexChanged(int)), this, SLOT(listCDRDivideRatio_currentIndexChanged(int)));
    connect(listLoopBandwidthSelect, SIGNAL(currentIndexChanged(int)), this, SLOT(listLoopBandwidthSelect_currentIndexChanged(int)));
    connect(listDataRateSelect,      SIGNAL(currentIndexChanged(int)), this, SLOT(listDataRateSelect_currentIndexChanged(int)));
    connect(listRateDividerSelect,   SIGNAL(currentIndexChanged(int)), this, SLOT(listRateDividerSelect_currentIndexChanged(int)));
    connect(listTargetLBWSelect,     SIGNAL(currentIndexChanged(int)), this, SLOT(listTargetLBWSelect_currentIndexChanged(int)));

}

BertUICDRChannel::~BertUICDRChannel()
{

}

void BertUICDRChannel::setVisualState(bool enabled)
{
    this->setEnabled(enabled);
    this->lampDataLock->setVisible(enabled);
    this->lampCDRLock->setVisible(enabled);
}


