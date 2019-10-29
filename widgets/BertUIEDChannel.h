#ifndef BERTUIEDCHANNEL_H
#define BERTUIEDCHANNEL_H

#include <QHBoxLayout>

#include "BertUIGroup.h"
#include "BertUILabel.h"
#include "BertUICheckBox.h"
#include "BertUIList.h"
#include "BertUIButton.h"
#include "BertUILamp.h"
#include "BertUIPane.h"
#include "BertUITextInfo.h"
#include "BertUIPlotBER.h"

/*!
 \brief Bert UI Error Detector Channel Widget
 This class creates a compound widget to show the controls for ONE
 error detector channel. It's based on a BertUIGroup, and uses
 various other widgets.
*/
class BertUIEDChannel : public BertUIGroup
{
    Q_OBJECT
public:
    explicit BertUIEDChannel(const QString &name = QString(""),
                             QWidget *parent = 0,
                             int channel = -1,
                             int lane = -1,
                             int x = 0,
                             int y = 0,
                             int minWidth = 0,
                             int minHeight = 0);
    ~BertUIEDChannel();

    enum EDChannelState
    {
        DISABLED,
        STOPPED,
        RUNNING
    };

    int getChannel() const   { return channel; }
    int getLane() const      { return lane;    }

    void setState(EDChannelState state);

    bool getEDEnabled() const       { return boolEDEnable->isChecked();  }
    void setEDEnabled(bool enabled) { boolEDEnable->setEnabled(enabled); }

    bool getEDPatternInvert() const { return boolEDPatternInvert->isChecked();  }

    int  getEDPatternIndex() const { return listEDPattern->currentIndex(); }

    void setEDSignalLock(bool locked);  // If true, sets the LOS lamp to "OK"
    void setEDCDRLock(bool locked);     // If true, sets the LOL lamp to "OK"
    void setEDErrorFlasher(bool on);    // If true, sets the error lamp to "ON"

    void setEDValueBits(double bits);
    void setEDValueErrors(double errors);
    void setEDValueBER(double errorRatio);

    void plotAddPoint(double data) { plot->addPoint(data); }
    void plotClear()               { plot->clear();        }

    // So that the parent class can get our "Enable" checkbox and add it
    // to their layout somewhere:
    BertUICheckBox *getEDCheckbox() const { return boolEDEnable; }

signals:
    void boolEDEnable_clicked              (int channel, bool checked);
    void listEDPattern_currentIndexChanged (int channel, int index);
    void boolEDPatternInvert_clicked       (int channel, bool checked);
    void listEDEQBoost_currentIndexChanged (int channel, int index);
    void buttonEDInjectError_clicked       (int channel);

private slots:
    void boolEDEnable_clicked(bool checked)           { emit boolEDEnable_clicked              (channel, checked); }
    void listEDPattern_currentIndexChanged(int index) { emit listEDPattern_currentIndexChanged (channel, index);   }
    void boolEDPatternInvert_clicked(bool checked)    { emit boolEDPatternInvert_clicked       (channel, checked); }
    void listEDEQBoost_currentIndexChanged(int index) { emit listEDEQBoost_currentIndexChanged (channel, index);   }
    void buttonEDInjectError_clicked()                { emit buttonEDInjectError_clicked       (channel);          }

protected:
    void resizeEvent(QResizeEvent *event);

private:
    const int channel;
    const int lane;

    BertUICheckBox *boolEDEnable;
    BertUIList     *listEDPattern;
    BertUICheckBox *boolEDPatternInvert;
    BertUILabel    *labelEDEQBoost;
    BertUIList     *listEDEQBoost;
    BertUIButton   *buttonEDInjectError;
    BertUILamp     *lampDataLock;
    BertUILamp     *lampCDRLock;
    BertUITextInfo *valueBERBits;
    BertUITextInfo *valueBERErrors;
    BertUITextInfo *valueBER;
    BertUILamp     *lampErrorFlasher;
    BertUIPane     *frameBERPlot;
    BertUIPlotBER  *plot;

    void makeUINormal();
    void makeUICompact();

    QString formatCount(double count);
    QString formatRate(double rate);

    void setRed(QLabel *item, QString text);
    void setGreen(QLabel *item, QString text);
    void setGrey(QLabel *item, QString text);
    void setWhite(QLabel *item, QString text);
};

#endif // BERTUIEDCHANNEL_H

