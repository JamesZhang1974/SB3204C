#ifndef BERTUIBGWIDGET_H
#define BERTUIBGWIDGET_H

#include <QWidget>

class BertUIBGWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BertUIBGWidget(QWidget *parent = nullptr);
    ~BertUIBGWidget();

signals:

public slots:

private:
    QString groupStyle;

};

#endif // BERTUIBGWIDGET_H
