#include <QCoreApplication>

// INNER Class
#include "filesystem.h"

void testIO(IFileIO *io, QString path, QString data)
{
    if (io->write(path, data))
    {
        QString value = io->read(path);
        Q_ASSERT(value == data);
        qDebug() << "TestIO Completed";

    } else {
        qDebug() << "TestIO wasn't be able to complete ";
    }
}

void complex(QString path, QString data)
{
    FileSystem fs;
    testIO(&fs, path, data);
}

void simple(QString path, QString data)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadWrite)) return;

    QTextStream stream(&file);
    stream << data;
    stream.flush();
    stream.seek(0);

    QString value = stream.readAll();
    file.close();
    Q_ASSERT(value == data);

    qDebug() << "Simple test is completed";
}

/*!
 * \brief main
 * Yapilacak isi 5 satirlik kodda yapabiliyorken kodu karistirmanin bir anlami olmaz.
 * Kod her zaman basit olmalidir.
 * \param argc
 * \param argv
 * \return
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // complex("test.txt", "hello world");
    simple("test.txt", "hello world");

    return a.exec();
}
