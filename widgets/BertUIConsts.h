#ifndef BERTUICONSTS_H
#define BERTUICONSTS_H

#include <QString>
#include <QStringList>

/*!
  \brief This header contains some constants to control the appearance of widgets.
         Used by other widgets.
*/

#define UI_ITEM_HEIGHT   23     // Default height for one-line widgets (labels, buttons, etc)

// #define BERTUI_DEBUG_LAYOUT 1    // Define this to show borders of various layout items for debugging.

// Colours:
class BertUIColours
{
public:

    static const QString &getChannelColourFG(int channel);
    static const QString &getChannelColourBG(int channel);

    static const QString &getLaneColourFG(int lane);
    static const QString &getLaneColourBG(int lane);

private:

    static const QStringList channelColoursFG;
    static const QStringList channelColoursBG;

    static const QString colourBlack;
    static const QString colourLGrey;

};

#endif // BERTUICONSTS_H

