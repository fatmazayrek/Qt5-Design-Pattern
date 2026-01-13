#include <QCoreApplication>
#include <QHostAddress>

// INNER Class
#include "mysocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // QTcpSocket socket;
    MySocket socket;

    qDebug() << "Connected";
    socket.connectToHost(QHostAddress("127.0.0.1"), 5000);
    socket.waitForConnected();
    qDebug() << "Connected";

    qDebug() << "Socket is closing";
    socket.close();
    socket.waitForDisconnected();
    qDebug() << "Disconnected";

    return a.exec();
}
