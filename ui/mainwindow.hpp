#ifndef DM_UI_MAINWINDOW
#define DM_UI_MAINWINDOW


#include <QtCore/QString>
#include <QtCore/QSize>
#include <QtCore/QObject>
#include <QtCore/QDebug>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMessageBox>
#include <QtGui/QIcon>
#include <QtGui/QAction>
#include <QtGui/QAction>
#include <QtGui/QCloseEvent>


#include "./object.hpp"
#include "./icon.hpp"


namespace dm::ui {


class MainWindow : public Object {
  Q_OBJECT
 public:
  static QString windowTitle;
  static QSize windowSize;
  MainWindow(QObject *parent = nullptr);
  ~MainWindow();
  // void closeEvent(QCloseEvent *event);
 public slots:
  void show();
 private:
  // UI Widgets
  QMainWindow *windowWidget = new QMainWindow();
  QMenuBar *menuBarWidget = windowWidget->menuBar();
  QStatusBar *statusBarWidget = windowWidget->statusBar();
  QMenu *fileMenuWidget = new QMenu(tr("File"), menuBarWidget);
  QMenu *helpMenuWidget = new QMenu(tr("Help"), menuBarWidget);
  QAction *openMapActionWidget = new QAction(Icon::openFolder, tr("Open Map"), fileMenuWidget);
  QAction *newMapActionWidget = new QAction(Icon::plus, tr("New Map"), fileMenuWidget);
  QAction *aboutDmActionWidget = new QAction(Icon::question, tr("Help"), helpMenuWidget);
};


} // namespace dm::ui


#endif // macro DM_UI_MAINWINDOW
