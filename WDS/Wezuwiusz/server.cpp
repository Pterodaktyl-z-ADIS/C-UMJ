#include "server.h"

Server :: Server(QObject *parent) :
    QTcpServer(parent)
{
}

void Server::StartServer()
{
    if(!this->listen(QHostAddress::Any, 1234))
    {
        qDebug() << "could not start server";
    }
    else
    {
        qDebug() << "listening..";
    }
}

void Server::incomingConnection(int socketDescriptor)
{
    qDebug() << socketDescriptor << "conecting..";
    Thread *thread = new Thread(socketDescriptor, this);
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}

//void Server::newConnection()
//{
//    QTcpSocket *socket = server->nextPendingConnection();

//    socket->write("hello client\r\n");
//    socket->flush();

//    socket->waitForBytesWritten(3000);

//    socket->close();
//}
