#ifndef BERTUIIMAGE_H
#define BERTUIIMAGE_H

#include <QLabel>

class BertUIImage : public QLabel
{
    Q_OBJECT
public:
    explicit BertUIImage(const QString &name = QString(""),
                         QWidget *parent = 0,
                         const QString &fileName = QString(""),
                         int x = 0,
                         int y = 0,
                         int width = 100,
                         int height = 100);
    ~BertUIImage();

signals:

public slots:
};

#endif // BERTUIIMAGE_H
