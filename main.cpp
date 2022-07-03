#include "ui/mainwindow.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication gui(argc, argv);
    gui.setApplicationName("Dev-Mini");
    gui.setApplicationVersion("0.1.0");
    gui.setOrganizationName("Starlight Dev Team");
    gui.setOrganizationDomain("https://dev.starlight.work/"); // Future domain.

    dm::ui::MainWindow w;
    w.show();
    return gui.exec();
}
