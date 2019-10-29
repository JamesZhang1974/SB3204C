#include "BertUITabs.h"
#include "BertBranding.h"

BertUITabs::BertUITabs(const QString &name,
                       QWidget *parent,
                       int x,
                       int y,
                       int width,
                       int height)
    : QTabWidget(parent)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, height));

    QFont tabFont;
    tabFont.setPointSize(10);

    setFont(tabFont);

    setStyleSheet(BertBranding::MAIN_TAB_STYLE);

    //setTabTextColor()??
    //setTabShape(QTabWidget::Triangular);

}

BertUITabs::~BertUITabs()
{ }

