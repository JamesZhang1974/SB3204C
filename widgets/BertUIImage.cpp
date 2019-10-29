#include "BertUIImage.h"

BertUIImage::BertUIImage(const QString &name,
                         QWidget *parent,
                         const QString &fileName,
                         int x,
                         int y,
                         int width,
                         int height)
    : QLabel(parent)
{
    if (name.length() > 0) setObjectName(name);
    setGeometry(QRect(x, y, width, height));
    setScaledContents(true);

    setMaximumSize(width,height);
    setMinimumSize(width,height);

    if (fileName != "")
    {
        QPixmap sourcePix = QPixmap(fileName).scaled(width, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        setPixmap(sourcePix);
    }
}

BertUIImage::~BertUIImage()
{ }

