#ifndef BERTUIPGCHANNEL_H
#define BERTUIPGCHANNEL_H

#include "BertUIGroup.h"
#include "BertUILabel.h"
#include "BertUICheckBox.h"
#include "BertUIList.h"

#include <QDebug>

/*!
 \brief Bert UI PG Channel Widget
 This class creates a compound widget to show the controls for ONE
 pattern generator channel. It's based on a BertUIGroup, and uses
 various other widgets.
*/
class BertUIPGChannel : public BertUIGroup
{
    Q_OBJECT
public:
    explicit BertUIPGChannel(const QString &name = QString(""),
                             QWidget *parent = 0,
                             int channel = -1,
                             int lane = -1,
                             int x = 0,
                             int y = 0,
                             int minWidth = 0,
                             int minHeight = 0,
                             bool showCDRBypassOptions = true);
    ~BertUIPGChannel();

    int getChannel() const { return channel; }
    int getLane()    const { return lane;    }

    void setPGPatternIndex(int index) { listPGPattern->setCurrentIndex(index); }

    int getPGAmplitudeIndex()  const { return listPGAmplitude->currentIndex();    }
    int getPGAmplitudeBIndex()  const { return listPGAmplitudeB->currentIndex();    }
    int getPGPatternIndex()    const { return listPGPattern->currentIndex();      }
    int getDeemphLevelIndex()  const { return listPGDeemphLevel->currentIndex();  }
    int getDeemphCursorIndex() const { return listPGDeemphCursor->currentIndex(); }
    int getPGCrossPointIndex() const { return listPGCrossPoint->currentIndex();   }

    int getPGCDRBypassIndex() const;

signals:
    void boolPGLaneOn_clicked                   (int lane, bool checked);
    void boolPGLaneInverted_clicked             (int lane, bool checked);
    void listPGAmplitude_currentIndexChanged    (int lane, int index);
    void listPGAmplitudeB_currentIndexChanged    (int lane, int index);
    void listPGPattern_currentIndexChanged      (int lane, int index);
    void listPGDeemphLevel_currentIndexChanged  (int lane, int index);
    void listPGDeemphCursor_currentIndexChanged (int lane, int index);
    void listPGCrossPoint_currentIndexChanged   (int lane, int index);
    void listPGCDRBypass_currentIndexChanged    (int lane, int index);

private slots:
    void boolPGLaneOn_clicked(bool checked)                { emit boolPGLaneOn_clicked                   (lane, checked); }
    void boolPGLaneInverted_clicked(bool checked)          { emit boolPGLaneInverted_clicked             (lane, checked); }
    void listPGAmplitude_currentIndexChanged(int index)    { emit listPGAmplitude_currentIndexChanged    (lane, index);   }
    void listPGAmplitudeB_currentIndexChanged(int index)    { emit listPGAmplitudeB_currentIndexChanged    (lane, index);   }
    void listPGPattern_currentIndexChanged(int index)      { emit listPGPattern_currentIndexChanged      (lane, index);   }
    void listPGDeemphLevel_currentIndexChanged(int index)  { emit listPGDeemphLevel_currentIndexChanged  (lane, index);   }
    void listPGDeemphCursor_currentIndexChanged(int index) { emit listPGDeemphCursor_currentIndexChanged (lane, index);   }
    void listPGCrossPoint_currentIndexChanged(int index)   { emit listPGCrossPoint_currentIndexChanged   (lane, index);   }
    void listPGCDRBypass_currentIndexChanged(int index)    { emit listPGCDRBypass_currentIndexChanged    (lane, index);   }

private:

    const int channel;
    const int lane;

    BertUICheckBox *boolPGLaneOn;
    BertUICheckBox *boolPGInverted;

    BertUIList *listPGAmplitude;
    BertUIList *listPGAmplitudeB;
    BertUIList *listPGPattern;
    BertUIList *listPGDeemphLevel;
    BertUIList *listPGDeemphCursor;
    BertUIList *listPGCrossPoint;
    BertUIList *listPGCDRBypass;

    bool showCDRBypassOptions;

};

#endif // BERTUIPGCHANNEL_H
