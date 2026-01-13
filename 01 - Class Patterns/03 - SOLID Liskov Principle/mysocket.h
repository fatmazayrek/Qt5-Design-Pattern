#ifndef MYSOCKET_H
#define MYSOCKET_H

// QT Libs
#include <QObject>
#include <QTcpSocket>
#include <QDebug>

/*!
 * \brief The MySocket class
 * Liskov Principle
 * Bir alt sinif turemis oldugu ust sinifin ozelligini bozmamali.
 */
class MySocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit MySocket(QObject *parent = nullptr);

    // QIODevice interface
public:
    void close();
};

#endif // MYSOCKET_H
