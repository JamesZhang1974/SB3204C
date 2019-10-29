#ifndef BERTUILABEL_H
#define BERTUILABEL_H

#include <QLabel>

class BertUILabel : public QLabel
{
    Q_OBJECT
public:
    explicit BertUILabel(const QString &name = QString(""),
                         QWidget *parent = 0,
                         const QString &text = QString(""),
                         int lane = -1,
                         int x = 0,
                         int y = 0,
                         int width = 100);
    ~BertUILabel();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;

};

#endif // BERTUILABEL_H
