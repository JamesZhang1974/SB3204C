#include "BertUILabel.h"
#include "BertUIConsts.h"
#include "BertBranding.h"

BertUILabel::BertUILabel(const QString &name,
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

    /* E.g. How to set font:
    QFont font1;
    font1.setFamily(QStringLiteral("Lucida Console"));
    font1.setPointSize(12);
    setFont(font1);
    */

#ifdef BERTUI_DEBUG_LAYOUT
    setStyleSheet(QStringLiteral("border: 1px solid blue; "));      // Border for debugging
#endif

    setStyleSheet(BertBranding::UI_STYLESHEET);
    setText(text);

}

BertUILabel::~BertUILabel()
{ }

