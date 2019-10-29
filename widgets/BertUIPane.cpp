#include "BertUIPane.h"
#include "BertUIConsts.h"

BertUIPane::BertUIPane(const QString &name,
                       QWidget *parent,
                       int lane,
                       int x,
                       int y,
                       int width,
                       int height)
    : QFrame(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, height));
    if (width > 0)
    {
        setMinimumWidth(width);
        setMaximumWidth(width);
    }
    if (height > 0)
    {
        setMinimumHeight(height);
        setMaximumHeight(height);
    }

#ifdef BERTUI_DEBUG_LAYOUT
    setStyleSheet(QStringLiteral("BertUIPane { border: 1px solid red; margin: 0px; } "));      // Border for debugging
#else
    setStyleSheet(QStringLiteral("BertUIPane { padding: 0px; } "));
#endif

}

BertUIPane::~BertUIPane()
{ }

