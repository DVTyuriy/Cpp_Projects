#include <QCoreApplication>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    QCoreApplication a(argc, argv);
    qDebug("'Привіт'");

    return a.exec();
}
