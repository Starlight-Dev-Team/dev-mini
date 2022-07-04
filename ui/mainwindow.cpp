#ifndef UI_MAINWINDOW_CPP
#define UI_MAINWINDOW_CPP


#include "mainwindow.hpp"

namespace dm::ui
{


QString MainWindow::windowTitle = tr("Dev-Mini");
QSize MainWindow::windowSize = QSize(1060, 630);

MainWindow::~MainWindow()
{
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // init all the attributes
    menuBarWidget = this->menuBar();
    toolBarTopWidget = new QToolBar(this);
    statusBarWidget = this->statusBar();
    fileMenuWidget = new QMenu(tr("File"), this->menuBarWidget);
    helpMenuWidget = new QMenu(tr("Help"), this->menuBarWidget);
    openMapActionWidget = new QAction(Icon::openFolder, tr("Open Map"), this->fileMenuWidget);
    newMapActionWidget = new QAction(Icon::plus, tr("New Map"), this->fileMenuWidget);
    aboutDmActionWidget = new QAction(Icon::question, tr("Help"), this->helpMenuWidget);

    // make up the user interface
    makeupUI();
}


void MainWindow::makeupUI()
{
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

    connect(this->openMapActionWidget, &QAction::triggered, this, &MainWindow::openMap);
    connect(this->newMapActionWidget, &QAction::triggered, this, &MainWindow::newMap);
}


void MainWindow::closeEvent(QCloseEvent *event)
{
    // Displays a modal box, asking whether to save the documents in the workspace.
    AskSaveFileDialog closingBox(tr("Save changes to runspace in the workspace?"));
    int closingChoice = closingBox.exec();
    switch (closingChoice)
    {
    case QMessageBox::SaveAll:
        // Save documents, and then exit.
        break;
    case QMessageBox::Discard:
        // Exit.
        break;
    case QMessageBox::Cancel:
        // Cancel exit.
        event->ignore();
        break;
    default:
        // What happened?
        qWarning() << "No closing option " << closingChoice << ".";
        break;
    }
}


void MainWindow::newMap()
{

}


void MainWindow::openMap()
{

}


} // NAMESPACE dm::ui


#endif // UI_MAINWINDOW_CPP