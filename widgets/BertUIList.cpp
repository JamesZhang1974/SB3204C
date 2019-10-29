#include "BertUIList.h"
#include "BertUIConsts.h"

BertUIList::BertUIList(const QString &name,
                       QWidget *parent,
                       const QStringList &items,
                       int lane,
                       int x,
                       int y,
                       int width)
 : QComboBox(parent), lane(lane)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, UI_ITEM_HEIGHT));
    if (items.length() > 0)
    {
        addItems(items);
        setCurrentIndex(0);
    }
}

BertUIList::~BertUIList()
{

}


/*!
 \brief Get item list from this combobox
 \return QString containing a copy of the list of items in the combobox.
*/
QStringList BertUIList::getItems() const
{
    QStringList currentItems;
    for(auto i = 0; i < count(); i++) currentItems.append(itemText(i));
    return currentItems;
}
