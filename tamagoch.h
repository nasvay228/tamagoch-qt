#ifndef TAMAGOCH_H
#define TAMAGOCH_H

#include <QObject>

class tamagoch : public QObject
{
    Q_OBJECT
public:
    explicit tamagoch(QObject *parent = nullptr);

signals:

public slots:
};

#endif // TAMAGOCH_H