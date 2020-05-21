#include "thread.h"


Thread::Thread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
}
void Thread::run()
{
    //threads starts here
    qDebug() << socketDescriptor << "starting thread";
    socket = new QTcpSocket();
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconected()), this, SLOT(disconected()), Qt::DirectConnection);

    qDebug() << socketDescriptor << "client connected";

    exec(); //tell thread to close, without it could be never end thread
}

void Thread::readyRead()
{
    QByteArray Data = socket->readAll();
    qDebug() << socketDescriptor << "data in: "<< Data;

    socket->write(Data);
}

void Thread::disconected()
{
    qDebug() << socketDescriptor << "disconnected";

    socket->deleteLater();
    exit(0);
}
