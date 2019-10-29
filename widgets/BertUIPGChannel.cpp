#include "BertUIPGChannel.h"

BertUIPGChannel::BertUIPGChannel(const QString &name,
                                 QWidget *parent,
                                 int channel,
                                 int lane,
                                 int x,
                                 int y,
                                 int minWidth,
                                 int minHeight,
                                 bool showCDRBypassOptions)
    : BertUIGroup(name, parent, QString("Channel %1:").arg(channel), lane, x, y, 0, 0),
      channel(channel),
      lane(lane),
      showCDRBypassOptions(showCDRBypassOptions)
{
    if (name.length() > 0) setObjectName(name);
    const int X_LFT = 14;
    const int X_AMP = 44;
    const int X_PAT = X_AMP + 144;
    const int X_INV = X_PAT + 109;
    const int X_DEM = X_INV + 54;
    const int X_CUR = X_DEM + 68;
    const int X_CPA = X_CUR + 98;
    const int X_CDR = X_CPA + 88;
    const int Y_RW1 = 25;
    const int Y_RW2 = 50;
    // ---------- One Channel: ----------------------------------------------
    setMinimumWidth(minWidth);
    setMinimumHeight(minHeight);
    new                      BertUILabel    ("",                                         this, "On",          lane, X_LFT,    Y_RW1, 25 );
    new                      BertUILabel    ("",                                         this, "Amplitude",   lane, X_AMP+3,  Y_RW1, 60 );
    new                      BertUILabel    ("",                                         this, "Pattern",     lane, X_PAT+3,  Y_RW1, 60 );
    new                      BertUILabel    ("",                                         this, "Inverted",    lane, X_INV-6,  Y_RW1, 55 );
    new                      BertUILabel    ("",                                         this, "De-Emphasis", lane, X_DEM+3,  Y_RW1, 75 );
    new                      BertUILabel    ("",                                         this, "Cross Point", lane, X_CPA+3,  Y_RW1, 70 );
    if (showCDRBypassOptions)
    {
        new                  BertUILabel    ("",                                         this, "CDR Bypass",  lane, X_CDR,    Y_RW1, 70 );
    }

    boolPGLaneOn        = new BertUICheckBox (QString("boolPGLaneOn_%1").arg(lane),       this, "",            lane, X_LFT+2,  Y_RW2, 21 );
    listPGAmplitude     = new BertUIList     (QString("listPGAmplitude_%1").arg(lane),    this, QStringList(), lane, X_AMP,    Y_RW2, 50 );
    listPGAmplitudeB    = new BertUIList     (QString("listPGAmplitudeB_%1").arg(lane),   this, QStringList(), lane, X_AMP+54, Y_RW2, 50 );
    new                      BertUILabel    ("",                                         this, "mV",   lane, X_AMP+110,  Y_RW2, 24 );
    listPGPattern       = new BertUIList     (QString("listPGPattern_%1").arg(lane),      this, QStringList(), lane, X_PAT,    Y_RW2, 101);
    boolPGInverted      = new BertUICheckBox (QString("boolPGInverted_%1").arg(lane),     this, "",            lane, X_INV+8,  Y_RW2, 21 );
    listPGDeemphLevel   = new BertUIList     (QString("listPGDeemphLevel_%1").arg(lane),  this, QStringList(), lane, X_DEM,    Y_RW2, 61 );
    listPGDeemphCursor  = new BertUIList     (QString("listPGDeemphCursor_%1").arg(lane), this, QStringList(), lane, X_CUR,    Y_RW2, 91 );
    listPGCrossPoint    = new BertUIList     (QString("listPGCrossPoint_%1").arg(lane),   this, QStringList(), lane, X_CPA,    Y_RW2, 71 );
    if (showCDRBypassOptions)
    {
        listPGCDRBypass = new BertUIList     (QString("listPGCDRBypass_%1").arg(lane),    this, QStringList(), lane, X_CDR,    Y_RW2, 71 );
    }

    // ----------------------------------------------------------------------
    // Connect up signals from component widgets to build a combined signal interface for whole widget:
    connect(boolPGLaneOn,         SIGNAL(clicked(bool)),            this, SLOT(boolPGLaneOn_clicked(bool)));
    connect(boolPGInverted,       SIGNAL(clicked(bool)),            this, SLOT(boolPGLaneInverted_clicked(bool)));
    connect(listPGAmplitude,      SIGNAL(currentIndexChanged(int)), this, SLOT(listPGAmplitude_currentIndexChanged(int)));
    connect(listPGAmplitudeB,      SIGNAL(currentIndexChanged(int)), this, SLOT(listPGAmplitudeB_currentIndexChanged(int)));
    connect(listPGPattern,        SIGNAL(currentIndexChanged(int)), this, SLOT(listPGPattern_currentIndexChanged(int)));;
    connect(listPGDeemphLevel,    SIGNAL(currentIndexChanged(int)), this, SLOT(listPGDeemphLevel_currentIndexChanged(int)));;
    connect(listPGDeemphCursor,   SIGNAL(currentIndexChanged(int)), this, SLOT(listPGDeemphCursor_currentIndexChanged(int)));;
    connect(listPGCrossPoint,     SIGNAL(currentIndexChanged(int)), this, SLOT(listPGCrossPoint_currentIndexChanged(int)));;
    if (showCDRBypassOptions)
    {
      connect(listPGCDRBypass,      SIGNAL(currentIndexChanged(int)), this, SLOT(listPGCDRBypass_currentIndexChanged(int)));
    }
}

BertUIPGChannel::~BertUIPGChannel()
{}

int BertUIPGChannel::getPGCDRBypassIndex() const
{
    if (showCDRBypassOptions) return listPGCDRBypass->currentIndex();
    else                      return 0;
}

