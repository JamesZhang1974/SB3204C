#ifndef BERTUILIST_H
#define BERTUILIST_H

#include <QComboBox>

class BertUIList : public QComboBox
{
public:
    BertUIList(const QString &name = QString(""),
               QWidget *parent = 0,
               const QStringList &items = QStringList(),
               int lane = -1,
               int x = 0,
               int y = 0,
               int width = 100);
    ~BertUIList();

    int getLane() const { return lane; }
    QStringList getItems() const;

private:
    const int lane;

};

#endif // BERTUILIST_H
