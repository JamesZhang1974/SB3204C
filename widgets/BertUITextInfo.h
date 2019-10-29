#ifndef BERTUITEXTINFO_H
#define BERTUITEXTINFO_H

#include <QLabel>

class BertUITextInfo : public QLabel
{
    Q_OBJECT
public:
    explicit BertUITextInfo(const QString &name = QString(""),
                            QWidget *parent = 0,
                            const QString &text = QString(""),
                            int lane = -1,
                            int x = 0,
                            int y = 0,
                            int width = 100);
    ~BertUITextInfo();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;

};

#endif // BERTUITEXTINFO_H
