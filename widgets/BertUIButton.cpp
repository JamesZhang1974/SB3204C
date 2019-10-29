#include "BertUIButton.h"
#include "BertUIConsts.h"

BertUIButton::BertUIButton(const QString &name,
                           QWidget *parent,
                           const QString &text,
                           int lane,
                           int x,
                           int y,
                           int width,
                           int height)
    : QPushButton(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, height));
    setText(text);
}

BertUIButton::~BertUIButton()
{ }

