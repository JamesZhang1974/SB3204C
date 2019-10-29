#ifndef BERTUIBUTTON_H
#define BERTUIBUTTON_H

#include <QPushButton>
#include "BertUIConsts.h"

class BertUIButton : public QPushButton
{
    Q_OBJECT
public:
    explicit BertUIButton(const QString &name = QString(""),
                          QWidget *parent = 0,
                          const QString &text = QString(""),
                          int lane = -1,
                          int x = 0,
                          int y = 0,
                          int width = 100,
                          int height = UI_ITEM_HEIGHT);
    ~BertUIButton();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;


};

#endif // BERTUIBUTTON_H
