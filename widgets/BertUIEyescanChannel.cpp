#include "BertUIEyescanChannel.h"
#include <QResizeEvent>

BertUIEyescanChannel::BertUIEyescanChannel(const QString &name,
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
    plot = new BertUIPlotEye(QString("Eye Scan & BER Contour - ED Channel %1").arg(channel),
                             this);
    plot->show();
    // ----------------------------------------------------------------------
}

BertUIEyescanChannel::~BertUIEyescanChannel()
{
  if (plot) delete plot;
}



void BertUIEyescanChannel::resizeEvent(QResizeEvent *event)
{
  Q_UNUSED(event)
  plot->resize();
}

