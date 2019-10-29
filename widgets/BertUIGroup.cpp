#include "BertUIGroup.h"
#include "BertUIConsts.h"
#include "BertBranding.h"

#include <QDebug>

BertUIGroup::BertUIGroup(const QString &name,
                         QWidget *parent,
                         const QString &title,
                         int lane,
                         int x,
                         int y,
                         int width,
                         int height)
    : QGroupBox(parent), lane(lane)
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

    QFont font1;
    font1.setBold(true);
    setFont(font1);

    setTitle(title);

    if (lane >= 0)
    {
        // Group is for a lane / channel: use coloured channel names and background:
        if (BertBranding::USE_CHANNEL_BG_COLORS)
        {
            groupStyle = QString(BertBranding::UI_STYLESHEET).append(
                           QString(" BertUIGroup "
                                   " { "
                                   " border: 0px; "
                                   " background-color: %1; "
                                   " } "
                                   " BertUIGroup::title { padding: 4px; } "
                                   )
                                .arg(BertUIColours::getLaneColourBG(lane))
                        );
        }
        else
        {
            groupStyle = QString(BertBranding::UI_STYLESHEET).append(
                           QString(" BertUIGroup "
                                   " { "
                                   " border-left: 0px; "
                                   " border-top: 0px; "
                                   " border-right: 1px solid #e0e0e0; "
                                   " border-bottom: 1px solid #e0e0e0; "
                                   " background-color: transparent; "
                                   " } "
                                   " BertUIGroup::title { padding: 4px; } "
                                   )
                        );
        }
    }
    else
    {
        // Normal group:
        groupStyle = QString(BertBranding::UI_STYLESHEET);
    }
    setStyleSheet(groupStyle);

}

BertUIGroup::~BertUIGroup()
{ }

