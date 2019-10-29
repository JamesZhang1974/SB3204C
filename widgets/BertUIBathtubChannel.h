#ifndef BERTUIBATHTUBCHANNEL_H
#define BERTUIBATHTUBCHANNEL_H

#include "BertUIGroup.h"
#include "BertUIPlotBathtub.h"

/*!
 \brief Bert UI Bathtub Plot Channel Widget
 This class creates a compound widget to show the bathtub plot
 for ONE channel. It's based on a BertUIGroup, and uses
 various other widgets.
*/
class BertUIBathtubChannel : public BertUIGroup
{
    Q_OBJECT
public:
    explicit BertUIBathtubChannel(const QString &name = "",
                                  QWidget *parent = 0,
                                  int channel = -1,
                                  int lane = -1,
                                  int x = 0,
                                  int y = 0,
                                  int minWidth = 0,
                                  int minHeight = 0);
    ~BertUIBathtubChannel();

    int getChannel() const { return channel; }
    int getLane()    const { return lane;    }

    void plotShowData(const QVector<double> &data) { plot->showData(data); }
    void plotClear()                               { plot->clear();        }

protected:
    void resizeEvent(QResizeEvent *event);

private:

    const int channel;
    const int lane;

    BertUIPlotBathtub *plot;

};

#endif // BERTUIBATHTUBCHANNEL_H
