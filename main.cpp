#include <QApplication>


#include "ui/mainwindow.hpp"
#include "ui/translator.hpp"


int main(int argc, char *argv[]) {
  QApplication *gui = new QApplication(argc, argv);
  gui->setApplicationName("Dev-Mini");
  gui->setApplicationVersion("0.1.0");
  gui->setOrganizationName("Starlight Dev Team");
  gui->setOrganizationDomain("https://dev.starlight.work/"); // future domain
  dm::ui::Translator* translator = new dm::ui::Translator(gui);
  dm::ui::MainWindow* mainWindow = new dm::ui::MainWindow(gui);
  mainWindow->show();
  return gui->exec();
}
