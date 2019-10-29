#ifndef BERTUIEYESCANCHANNEL_H
#define BERTUIEYESCANCHANNEL_H

#include "BertUIGroup.h"
#include "BertUIPlotEye.h"

/*!
 \brief Bert UI Eye Scan Channel Widget
 This class creates a compound widget to show the eye plot for ONE
 eye scan channel. It's based on a BertUIGroup, and uses
 various other widgets.
*/
class BertUIEyescanChannel : public BertUIGroup
{
    Q_OBJECT
public:
    explicit BertUIEyescanChannel(const QString &name = "",
                                  QWidget *parent = 0,
                                  int channel = -1,
                                  int lane = -1,
                                  int x = 0,
                                  int y = 0,
                                  int minWidth = 0,
                                  int minHeight = 0);
    ~BertUIEyescanChannel();

    int getChannel() const { return channel; }
    int getLane()    const { return lane;    }

    void plotShowData(const QVector<double> &data, int xRes, int yRes) { plot->showData(data, xRes, yRes); }
    void plotClear()                                                   { plot->clear();                    }

protected:
    void resizeEvent(QResizeEvent *event);

private:

    const int channel;
    const int lane;

    BertUIPlotEye *plot;

};

#endif // BERTUIEYESCANCHANNEL_H
