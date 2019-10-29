#include "BertUILamp.h"
#include "BertUIConsts.h"


BertUILamp::BertUILamp(const QString &name,
                       QWidget *parent,
                       const QString &textOK,
                       const QString &textError,
                       BertUILampState initialState,
                       int lane,
                       int x,
                       int y,
                       int width)
    : QLabel(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, UI_ITEM_HEIGHT));
    setAlignment(Qt::AlignCenter|Qt::AlignVCenter);

    this->textOff = QString("");
    this->textOK = QString(textOK);
    this->textError = QString(textError);

    setState(initialState);
}

BertUILamp::~BertUILamp()
{ }


void BertUILamp::setState(BertUILampState state)
{
    this->state = state;

    switch (state)
    {
    case OFF:
        setText(textOff);
        setVisible(false);
        break;

    case OK:
        setText(textOK);
        setStyleSheet( QStringLiteral("border: 1px solid black; background-color: rgb(170, 255, 127);") );
        setVisible(true);
        break;

    case ERR:
        setText(textError);
        setStyleSheet( QStringLiteral("border: 1px solid black; background-color: rgb(255, 96, 96);") );
        setVisible(true);
        break;
    }
}

