#include "BertUIBathtubChannel.h"
#include <QResizeEvent>

BertUIBathtubChannel::BertUIBathtubChannel(const QString &name,
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
    // ---------- One Channel: ----------------------------------------------
    setMinimumWidth(minWidth);
    setMinimumHeight(minHeight);
    plot = new BertUIPlotBathtub(QString("Bathtub Plot - ED Channel %1").arg(channel),
                                         channel,
                                         this);
    plot->show();
    // ----------------------------------------------------------------------
}

BertUIBathtubChannel::~BertUIBathtubChannel()
{
    if (plot) delete plot;
}



void BertUIBathtubChannel::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event)
    plot->resize();
}


