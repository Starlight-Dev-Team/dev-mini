#include "ui/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Dev-Mini");
    a.setApplicationVersion("0.1.0");
    a.setOrganizationName("Starlight Dev Team");
    a.setOrganizationDomain("https://dev.starlight.work/"); // Future domain.

    MainWindow w;
    w.show();
    return a.exec();
}
