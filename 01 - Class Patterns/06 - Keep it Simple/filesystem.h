#ifndef FILESYSTEM_H
#define FILESYSTEM_H

// QT Libs
#include <QObject>
#include <QFile>
#include <QDebug>

// INNER Class
#include "IFileIO.h"

class FileSystem : public QObject, public IFileIO
{
    Q_OBJECT
public:
    explicit FileSystem(QObject *parent = nullptr);

    // IFileIO interface
public:
    bool write(QString path, QString data);
    QString read(QString path);
};

#endif // FILESYSTEM_H
