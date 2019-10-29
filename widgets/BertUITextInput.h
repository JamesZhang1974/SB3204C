#ifndef BERTUITEXTINPUT_H
#define BERTUITEXTINPUT_H

#include <QLineEdit>

class BertUITextInput : public QLineEdit
{
    Q_OBJECT
public:
    explicit BertUITextInput(const QString &name = QString(""),
                             QWidget *parent = 0,
                             const QString &text = QString(""),
                             int lane = -1,
                             int x = 0,
                             int y = 0,
                             int width = 100);
    ~BertUITextInput();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;

};

#endif // BERTUITEXTINPUT_H
