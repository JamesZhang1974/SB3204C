#ifndef BERTUITABS_H
#define BERTUITABS_H

#include <QTabWidget>

class BertUITabs : public QTabWidget
{
public:
    BertUITabs(const QString &name = QString(""),
               QWidget *parent = 0,
               int x = 0,
               int y = 0,
               int width = 100,
               int height = 100);

    ~BertUITabs();
};

#endif // BERTUITABS_H
