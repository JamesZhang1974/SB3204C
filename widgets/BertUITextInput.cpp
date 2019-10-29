#include "BertUITextInput.h"
#include "BertUIConsts.h"

BertUITextInput::BertUITextInput(const QString &name,
                                 QWidget *parent,
                                 const QString &text,
                                 int lane,
                                 int x,
                                 int y,
                                 int width)
    : QLineEdit(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, UI_ITEM_HEIGHT));

    setAlignment(Qt::AlignLeft|Qt::AlignVCenter);

    setText(text);
}

BertUITextInput::~BertUITextInput()
{ }

