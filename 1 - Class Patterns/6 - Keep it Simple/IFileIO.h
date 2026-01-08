#ifndef IFILEIO_H
#define IFILEIO_H

// QT Libs
#include <QString>

class IFileIO
{
public:
    virtual bool write(QString path, QString data) = 0;
    virtual QString read(QString path) = 0;
};

#endif // IFILEIO_H
