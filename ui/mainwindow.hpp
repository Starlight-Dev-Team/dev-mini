#ifndef UI_MAINWINDOW_HPP
#define UI_MAINWINDOW_HPP


#include <QtCore/QString>
#include <QtCore/QSize>
#include <QtCore/QObject>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMessageBox>
#include <QtGui/QIcon>
#include <QtGui/QAction>
#include <QtGui/QCloseEvent>

#include "icon.cpp"
#include "dialog.cpp"


namespace dm::ui{


class MainWindow : protected QMainWindow {
 Q_OBJECT
 public:
  static QString windowTitle;
  static QSize windowSize;
  MainWindow();
  ~MainWindow();
  void closeEvent(QCloseEvent *event);
 public slots:
  inline void show();
  static void openMap();
  static void newMap();
 protected:
  // Widgets.
  QMenuBar* menuBarWidget = this->menuBar();
  QToolBar* toolBarTopWidget = new QToolBar(this);
  QStatusBar* statusBarWidget = this->statusBar();
  QMenu* fileMenuWidget = new QMenu(tr("File"), this->menuBarWidget);
  QMenu* helpMenuWidget = new QMenu(tr("Help"), this->menuBarWidget);
  QAction* openMapActionWidget = new QAction(Icon::openFolder, tr("Open Map"), this->fileMenuWidget);
  QAction* newMapActionWidget = new QAction(Icon::plus, tr("New Map"), this->fileMenuWidget);
  QAction* aboutDmActionWidget = new QAction(Icon::question, tr("Help"), this->helpMenuWidget);
 private:
  QList<mini::App> appList;
};


}


#endif // UI_MAINWINDOW_HPP
