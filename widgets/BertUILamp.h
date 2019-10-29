#ifndef BERTUILAMP_H
#define BERTUILAMP_H

#include <QLabel>
#include <QString>

/*!
 \brief The BertUI Lamp Widget class
  A "Lamp" is a label with three pre-defined states:
    Off   (invisible)
    OK    (green)
    Error (red)
  The OK and Error states can have different text. Text string for
  each state are supplied to the constructor along with an initial
  state. State can be changed with calls to getState().

*/
class BertUILamp : public QLabel
{
    Q_OBJECT
public:
    enum BertUILampState
    {
        OFF,
        OK,
        ERR
    };

    explicit BertUILamp(const QString &name = QString(""),
                        QWidget *parent = 0,
                        const QString &textOK = QString(""),
                        const QString &textError = QString(""),
                        BertUILampState initialState = OFF,
                        int lane = -1,
                        int x = 0,
                        int y = 0,
                        int width = 100);
    ~BertUILamp();

    int             getLane() const { return lane; }
    BertUILampState getState() const { return state; }
    void            setState(BertUILampState state);

signals:

public slots:

private:
    const int lane;
    BertUILampState state;

    QString textOff;
    QString textOK;
    QString textError;

};

#endif // BERTUILAMP_H
