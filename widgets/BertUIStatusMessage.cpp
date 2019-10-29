#include "BertUIStatusMessage.h"
#include "BertUIConsts.h"

BertUIStatusMessage::BertUIStatusMessage(const QString &name,
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
    setMinimumWidth(500);

    QFont font1;
    font1.setFamily(QStringLiteral("Lucida Console"));
    font1.setPointSize(9);
    setFont(font1);

    setStyleSheet(QStringLiteral("border: 1px solid black; padding: 5px; "));
    setText(text);
}

BertUIStatusMessage::~BertUIStatusMessage()
{

}

