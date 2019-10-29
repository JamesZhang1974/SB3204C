#include "BertUIBGWidget.h"
#include "BertUIConsts.h"
#include "BertBranding.h"

BertUIBGWidget::BertUIBGWidget(QWidget *parent) : QWidget(parent)
{
    // Background Widget:
    groupStyle = QString(BertBranding::BG_STYLESHEET);
    setStyleSheet(groupStyle);
}

BertUIBGWidget::~BertUIBGWidget()
{ }

