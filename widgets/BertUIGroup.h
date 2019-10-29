#ifndef BERTUIGROUP_H
#define BERTUIGROUP_H

#include <QGroupBox>

class BertUIGroup : public QGroupBox
{
    Q_OBJECT
public:
    explicit BertUIGroup(const QString &name = QString(""),
                         QWidget *parent = 0,
                         const QString &title = QString(""),
                         int lane = -1,
                         int x = 0,
                         int y = 0,
                         int width = 0,
                         int height = 0);
    ~BertUIGroup();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;
    QString groupStyle;
};

#endif // BERTUIGROUP_H
