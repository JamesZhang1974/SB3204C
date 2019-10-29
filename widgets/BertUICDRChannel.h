#ifndef BERTUICDRCHANNEL_H
#define BERTUICDRCHANNEL_H

#include "BertUIGroup.h"
#include "BertUICheckBox.h"
#include "BertUILamp.h"
#include "BertUIList.h"

#include <QDebug>

/*!
 \brief Bert UI CDR Mode Channel Widget
 This class creates a compound widget to show the controls for ONE
 CDR Mode channel. It's based on a BertUIGroup, and uses
 various other widgets.
*/
class BertUICDRChannel : public BertUIGroup
{
    Q_OBJECT
public:
    explicit BertUICDRChannel(const QString &name = QString(""),
                              QWidget *parent = 0,
                              int core = -1,
                              int x = 0,
                              int y = 0,
                              int minWidth = 0,
                              int minHeight = 0);

    ~BertUICDRChannel();

    int  getCDRChannelSelectIndex() const { return listCDRChannelSelect->currentIndex(); }
    int  getCDRDivideRatioIndex()   const { return listCDRDivideRatio->currentIndex();   }
    int  getRateDependentIndex()    const { return listLoopBandwidthSelect->currentIndex();}
    int  getDateRateIndex()         const { return listDataRateSelect->currentIndex();}
    int  getRateDividerIndex()      const { return listRateDividerSelect->currentIndex();}
    int  getTargetLBWIndex()        const { return listTargetLBWSelect->currentIndex();}


    void setDataLockLampVisible(bool visible) { lampDataLock->setVisible(visible); }
    void setDataLockLampState(BertUILamp::BertUILampState state) { lampDataLock->setState(state); }
    void setRateDependentIndex(bool dependent) { listRateDividerSelect->setEnabled(dependent); listTargetLBWSelect->setEnabled(!dependent);}

    void setCDRLockLampVisible(bool visible) { lampCDRLock->setVisible(visible); }
    void setCDRLockLampState(BertUILamp::BertUILampState state) { lampCDRLock->setState(state); }

    bool getDataLocked() const { return dataLocked; }
    void setDataLocked(bool locked) { dataLocked = locked; }

    bool getCDRLocked() const { return cdrLocked; }
    void setCDRLocked(bool locked) { cdrLocked = locked; }

    void setVisualState(bool enabled);

signals:
    void listCDRChannelSelect_currentIndexChanged(int core, int index);
    void listCDRDivideRatio_currentIndexChanged(int core, int index);
    void listLoopBandwidthSelect_currentIndexChanged(int core,int index);
    void listDataRateSelect_currentIndexChanged(int core, int index);
    void listRateDividerSelect_currentIndexChanged(int core, int index);
    void listTargetLBWSelect_currentIndexChanged(int core, int index);

private slots:
    void listCDRChannelSelect_currentIndexChanged(int index)    { emit listCDRChannelSelect_currentIndexChanged(core, index); }
    void listCDRDivideRatio_currentIndexChanged(int index)      { emit listCDRDivideRatio_currentIndexChanged(core, index);   }
    void listLoopBandwidthSelect_currentIndexChanged(int index) { emit listLoopBandwidthSelect_currentIndexChanged(core, index);}
    void listDataRateSelect_currentIndexChanged(int index)      { emit listDataRateSelect_currentIndexChanged(core, index);}
    void listRateDividerSelect_currentIndexChanged(int index)   { emit listRateDividerSelect_currentIndexChanged(core, index);}
    void listTargetLBWSelect_currentIndexChanged(int index)     { emit listTargetLBWSelect_currentIndexChanged(core, index);}

private:
    const int core;
    bool dataLocked = false;
    bool cdrLocked = false;

    BertUIList           *listCDRChannelSelect;
    BertUIList           *listCDRDivideRatio;
    BertUIList           *listDataRateSelect;
    BertUIList           *listLoopBandwidthSelect;
    BertUIList           *listRateDividerSelect;
    BertUIList           *listTargetLBWSelect;
    BertUILamp           *lampDataLock;
    BertUILamp           *lampCDRLock;

};

#endif // BERTUICDRCHANNEL_H
