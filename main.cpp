#include <QApplication>


// #include "mini/app"
// #include "mini/map"
// #include "ui/icon"
// #include "ui/mainwindow"
// #include "ui/dialog"
#include "ui/mainwindow.hpp"


int main(int argc, char *argv[]) {
  // Qt.
  QApplication gui(argc, argv);
  gui.setApplicationName("Dev-Mini");
  gui.setApplicationVersion("0.1.0");
  gui.setOrganizationName("Starlight Dev Team");
  gui.setOrganizationDomain("https://dev.starlight.work/"); // future domain
  dm::ui::MainWindow* mainWindow = new dm::ui::MainWindow();
  mainWindow->show();
  return gui.exec();
}
