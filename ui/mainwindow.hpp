#ifndef UI_MAINWINDOW_HPP
#define UI_MAINWINDOW_HPP

#include "../ui/icon.hpp"
#include "../mini/app.hpp"
#include "dialog.hpp"

#include <QMainWindow>
#include <QList>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>
#include <QAction>
#include <QDebug>
#include <QToolBar>
#include <QCloseEvent>

namespace dm::ui
{


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
   QList<dm::mini::App> appList;
};

} // NAMESPACE dm::ui


#endif // UI_MAINWINDOW_HPP
