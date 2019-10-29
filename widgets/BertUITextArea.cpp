#include "BertUITextArea.h"
#include "BertUIConsts.h"

BertUITextArea::BertUITextArea(const QString &name,
                         QWidget *parent,
                         const QString &text,
                         int lane,
                         int x,
                         int y,
                         int width,
                         int height)
    : QLabel(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, height));

    QFont font1;
    font1.setPointSize(10);
    setFont(font1);

#ifdef BERTUI_DEBUG_LAYOUT
    setStyleSheet(QStringLiteral("border: 1px solid blue; "));      // Border for debugging
#endif

    setTextFormat(Qt::RichText);
    setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
    setWordWrap(true);
    setText(text);

}

BertUITextArea::~BertUITextArea()
{ }

