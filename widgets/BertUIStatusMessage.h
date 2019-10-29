#ifndef BERTUISTATUSMESSAGE_H
#define BERTUISTATUSMESSAGE_H

#include <QLabel>

class BertUIStatusMessage : public QLabel
{
    Q_OBJECT
public:
    explicit BertUIStatusMessage(const QString &name = QString(""),
                                 QWidget *parent = 0,
                                 const QString &text = QString(""),
                                 int lane = -1,
                                 int x = 0,
                                 int y = 0,
                                 int width = 0);
    ~BertUIStatusMessage();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;
};

#endif // BERTUISTATUSMESSAGE_H
