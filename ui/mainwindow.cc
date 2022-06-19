#include "ui/mainwindow.h"

namespace dm::ui{

Mainwindow::Mainwindow(QWidget *parent) {
  this->setParent(parent);
  this->setWindowTitle(Mainwindow::windowTitle);
  this->resize(Mainwindow::windowSize);
  this->setWindowFlags(Qt::Window);
}
Mainwindow::~Mainwindow() {
  ;
}

}
