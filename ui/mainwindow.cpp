#include "./mainwindow.hpp"


namespace dm::ui {


QString MainWindow::windowTitle = tr("Dev-Mini");
QSize MainWindow::windowSize = QSize(1060, 630);

MainWindow::MainWindow(QObject *parent) {
  setParent(parent);
  // window attributes
  windowWidget->setWindowTitle(MainWindow::windowTitle);
  windowWidget->resize(MainWindow::windowSize);
  windowWidget->setWindowFlags(Qt::Window);
  // set layouts
  windowWidget->setMenuBar(menuBarWidget);
  menuBarWidget->addMenu(fileMenuWidget);
  menuBarWidget->addMenu(helpMenuWidget);
  // actions on the menus
  fileMenuWidget->addAction(openMapActionWidget);
  fileMenuWidget->addAction(newMapActionWidget);
  helpMenuWidget->addAction(aboutDmActionWidget);
}
MainWindow::~MainWindow() {
  delete windowWidget;
}

void MainWindow::show() {
  windowWidget->show();
}

/* void MainWindow::closeEvent(QCloseEvent *event) {
  // Displays a modal box, asking whether to save the documents in the workspace.
  askSaveFileDialog closingBox(tr("Save changes to runspace in the workspace?"));
  int closingChoice = closingBox.exec();
  switch (closingChoice) {
    case QMessageBox::SaveAll: {
      // Save documents, and then exit.
      break;
    }
    case QMessageBox::Discard: {
      // Exit.
      break;
    }
    case QMessageBox::Cancel: {
      // Cancel exit.
      event->ignore();
      break;
    }
    default: {
      // What happened?
      qWarning() << "No closing option " << closingChoice << ".";
      break;
    }
  }
  qDebug() << "closeEvent" << event;
} */


} // namespace dm::ui
