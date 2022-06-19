#ifndef UI_MAINWINDOW_H_
#define UI_MAINWINDOW_H_

#include <QString>
#include <QSize>
#include <QMainWindow>

namespace dm::ui{

class Mainwindow : public QMainWindow {
 Q_OBJECT
 public:
  const QString windowTitle = QString(tr("Dev-Mini"));
  const QSize windowSize = QSize(1060, 630);
  Mainwindow(QWidget *parent = nullptr);
  ~Mainwindow();
};

}

#endif // UI_MAINWINDOW_H_
