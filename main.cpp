#include <QApplication>

#include "mini/app.cpp"
#include "mini/map.cpp"
#include "ui/mainwindow.cpp"
#include "ui/translator.cpp"
#include "ui/workspace.cpp"
#include "ui/dialog.cpp"

int main(int argc, char *argv[]) {
  // Qt.
  QApplication gui(argc, argv);
  gui.setApplicationName("Dev-Mini");
  gui.setApplicationVersion("0.1.0");
  gui.setOrganizationName("Starlight Dev Team");
  gui.setOrganizationDomain("https://dev.starlight.work/"); // Future domain.
  // Dev-Mini.
  dm::ui::Translator translator(gui);
  dm::ui::MainWindow mainWindow;
  mainWindow.show();
  /* dm::ui::SelectMapDialog dialog; // Test
     dialog.show();*/
  // Exec.
  return gui.exec();
}
