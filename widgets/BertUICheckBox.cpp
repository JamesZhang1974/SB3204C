#include "BertUICheckBox.h"
#include "BertUIConsts.h"
#include "BertBranding.h"

BertUICheckBox::BertUICheckBox(const QString &name,
                         QWidget *parent,
                         const QString &text,
                         int lane,
                         int x,
                         int y,
                         int width)
    : QCheckBox(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, UI_ITEM_HEIGHT));

    setStyleSheet(BertBranding::UI_STYLESHEET);
    setText(text);
}

BertUICheckBox::~BertUICheckBox()
{ }

