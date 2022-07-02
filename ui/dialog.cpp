#include "dialog.h"

SelectMapDialog::SelectMapDialog(const App &defaultApp) {
  this->setModal(true);
}

inline void SelectMapDialog::show() {
  this->QDialog::show();
}


AskSaveFileDialog::AskSaveFileDialog(QString content, StandardButtons buttons){
  this->setIcon(QMessageBox::Question);
  this->setWindowTitle(tr("Save Files"));
  this->setText(content);
  this->setStandardButtons(buttons);
  this->setDefaultButton(QMessageBox::SaveAll);
}


