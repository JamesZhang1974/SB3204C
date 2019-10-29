#ifndef BERTUIPANE_H
#define BERTUIPANE_H

#include <QFrame>

class BertUIPane : public QFrame
{
    Q_OBJECT
public:
    explicit BertUIPane(const QString &name = QString(""),
                        QWidget *parent = 0,
                        int lane = -1,
                        int x = 0,
                        int y = 0,
                        int width = 0,
                        int height = 0);
    ~BertUIPane();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;
};

#endif // BERTUIPANE_H
