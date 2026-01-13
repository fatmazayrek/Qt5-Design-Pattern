#include "mysocket.h"

MySocket::MySocket(QObject *parent)
    : QTcpSocket{parent}
{}

void MySocket::close()
{
    qDebug() << "MySocket is closing..";

    // QTcpSocket::close();         // Soket kapatilmaz ise turemis olunan sinifin beklenen davranisi bozulmus olur ve bu kritik bir hataya sebep olur
}
