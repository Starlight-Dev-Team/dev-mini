#include "./mainwindow.hpp"

namespace dm::ui {


MainWindow::MainWindow() {
  this->setWindowTitle(MainWindow::windowTitle);
  this->resize(MainWindow::windowSize);
  this->setWindowFlags(Qt::Window);
  this->setMenuBar(this->menuBarWidget);
  this->menuBarWidget->addMenu(this->fileMenuWidget);
  this->menuBarWidget->addMenu(this->helpMenuWidget);
  this->fileMenuWidget->addAction(this->openMapActionWidget);
  this->fileMenuWidget->addAction(this->newMapActionWidget);
  this->helpMenuWidget->addAction(this->aboutDmActionWidget);
  this->addToolBar(Qt::TopToolBarArea, this->toolBarTopWidget);
  this->toolBarTopWidget->addAction(this->openMapActionWidget);
  connect(this->openMapActionWidget, SIGNAL(triggered()), this,
          SLOT(MainWindow::openMap()));
  connect(this->newMapActionWidget, SIGNAL(triggered()), this,
          SLOT(MainWindow::newMap()));
}

QString MainWindow::windowTitle = tr("Dev-Mini");
QSize MainWindow::windowSize = QSize(1060, 630);

MainWindow::~MainWindow() {}

void MainWindow::closeEvent(QCloseEvent *event) {
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
}

inline void MainWindow::show() {
  this->QMainWindow::show();
}

void MainWindow::openMap() {
  SelectMapDialog selectDialog;
  selectDialog.show();
}
void MainWindow::newMap() {}


}
