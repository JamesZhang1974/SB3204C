#ifndef BERTUITEXTAREA_H
#define BERTUITEXTAREA_H

#include <QLabel>

/*!
 \brief Text Area Widget
        This is similar to a label, but allows height to be speficied.
        It may also use different fonts / styling to a label, and is used to
        display info, e.g. text on the "About" page.
        'text' content may be in rich text format.
*/
class BertUITextArea : public QLabel
{
    Q_OBJECT
public:
    explicit BertUITextArea(const QString &name = QString(""),
                         QWidget *parent = 0,
                         const QString &text = QString(""),
                         int lane = -1,
                         int x = 0,
                         int y = 0,
                         int width = 100,
                         int height = 100);
    ~BertUITextArea();

    int getLane() const { return lane; }

signals:

public slots:

private:
    const int lane;

};

#endif // BERTUITEXTAREA_H
