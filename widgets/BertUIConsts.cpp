#include "BertUIConsts.h"
#include "BertBranding.h"


// Predefined colour constants:
const QString BertUIColours::colourBlack = "black";
const QString BertUIColours::colourLGrey = "#e0e0e0";

// Foreground Colours for up to 8 channels:
const QStringList BertUIColours::channelColoursFG = { BertUIColours::colourBlack, // Nb: Channel numbers start at 1.
                                                      "#7b7b00",    // dark yellow... darker than "yellow"
                                                      "blue",
                                                      "magenta",
                                                      "green",
                                                      "orange",
                                                      "aqua",
                                                      "purple",
                                                      "brown"
                                                    };

// Background Colours for up to 8 channels: These should be muted versions of corresponding foreground colour.
const QStringList BertUIColours::channelColoursBG = { "transparent", // Nb: Channel numbers start at 1.
                                                      "#ffffd5",   // yellow
                                                      "#dee8ff",   // blue
                                                      "#ffdcf5",   // magenta
                                                      "#e8ffdc",   // green
                                                      "#fff4dc",   // orange
                                                      "#c4e2e3",   // aqua
                                                      "#d5c9df",   // purple
                                                      "#e3dfce",   // brown
                                                    };
// Other colour pairs:
// "red" / "#fdcdc"
// more purplish blue background: "#dcdcff"

/*!
 \brief Get foreground colour for a specified channel
 \param channel  Channel number (starting from 1)
 \return String containig a colour value which can be used in style sheets, etc.
*/
const QString &BertUIColours::getChannelColourFG(int channel)
{
    if (channel > 0 && channel < channelColoursFG.size()) return channelColoursFG[channel];
    else                                                  return colourBlack;
}


/*!
 \brief Get background colour for a specified channel
 Note: Channel / Lane Background colours will also be globally disabled if
 USE_CHANNEL_BG_COLORS is false (see branding.cpp)
 \param channel  Channel number (starting from 1)
 \return String containig a colour value which can be used in style sheets, etc.
*/
const QString &BertUIColours::getChannelColourBG(int channel)
{
    if (!BertBranding::USE_CHANNEL_BG_COLORS) return channelColoursBG[0];
    if (channel > 0 && channel < channelColoursBG.size()) return channelColoursBG[channel];
    else                                                  return colourLGrey;
}


/*!
 \brief Get foreground colour for a specified lane
 Lane numbers are converted into channel numbers
 and used to select the appropriate channel colour.
 \param lane  Lane number (starting from 0)
 \return String containig a colour value which can be used in style sheets, etc.
*/
const QString &BertUIColours::getLaneColourFG(int lane)
{
    int channel = (lane / 2) + 1;
    return getChannelColourFG(channel);
}


/*!
 \brief Get background colour for a specified lane
 Lane numbers are converted into channel numbers
 and used to select the appropriate channel colour.
 \param lane  Lane number (starting from 0)
 \return String containig a colour value which can be used in style sheets, etc.
*/
const QString &BertUIColours::getLaneColourBG(int lane)
{
    int channel = (lane / 2) + 1;
    return getChannelColourBG(channel);
}


