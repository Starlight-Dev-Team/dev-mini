#include "ui/mainwindow.cc"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[]) {
  QApplication gui(argc, argv);
  QTranslator translator;
  dm::ui::Mainwindow mainwindow;
  mainwindow.show();
  return gui.exec();
}
