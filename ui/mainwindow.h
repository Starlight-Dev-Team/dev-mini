#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../ui/icon.h"
#include "../mini/app.h"
#include "dialog.h"

#include <QMainWindow>
#include <QList>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>
#include <QAction>
#include <QDebug>
#include <QToolBar>
#include <QCloseEvent>


class MainWindow : public QMainWindow
{
//    Q_OBJECT
public:
    static QString windowTitle;
    static QSize windowSize;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void closeEvent(QCloseEvent* event) override;
    void makeupUI();
//public slots:
//   void show();
   void openMap();
   void newMap();
private:
   QMenuBar* menuBarWidget;
   QToolBar* toolBarTopWidget;
   QStatusBar* statusBarWidget;
   QMenu* fileMenuWidget;
   QMenu* helpMenuWidget;
   QAction* openMapActionWidget;
   QAction* newMapActionWidget;
   QAction* aboutDmActionWidget;
   QList<App> appList;
};
#endif // MAINWINDOW_H
