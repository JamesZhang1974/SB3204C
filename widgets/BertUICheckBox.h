#ifndef BERTUICHECKBOX_H
#define BERTUICHECKBOX_H

#include <QCheckBox>

class BertUICheckBox : public QCheckBox
{
    Q_OBJECT
public:
    explicit BertUICheckBox(const QString &name = QString(""),
                            QWidget *parent = 0,
                            const QString &text = QString(""),
                            int lane = -1,
                            int x = 0,
                            int y = 0,
                            int width = 100);
    ~BertUICheckBox();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;

};

#endif // BERTUICHECKBOX_H
