#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>


class Thread : public QThread
{
        Q_OBJECT
    public:
        explicit Thread(int ID, QObject *parent = 0);
        void run();

    signals:
        void error(QTcpSocket::SocketError socketerror);

    public slots:
        void readyRead();
        void disconected();

    private:
        QTcpSocket *socket;
        int socketDescriptor;
};

#endif // THREAD_H
