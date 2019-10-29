#include "BertUITextInfo.h"
#include "BertUIConsts.h"
#include "BertBranding.h"

BertUITextInfo::BertUITextInfo(const QString &name,
                         QWidget *parent,
                         const QString &text,
                         int lane,
                         int x,
                         int y,
                         int width)
    : QLabel(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, UI_ITEM_HEIGHT));

    setStyleSheet(BertBranding::UI_STYLESHEET);
    setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    setText(text);
}

BertUITextInfo::~BertUITextInfo()
{ }

