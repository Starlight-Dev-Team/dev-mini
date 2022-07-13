#ifndef UI_DIALOG_CPP
#define UI_DIALOG_CPP


#include "./dialog.hpp"


namespace dm::ui {


SelectMapDialog::SelectMapDialog(const mini::App &defaultApp) {
  this->setModal(true);
}

inline void SelectMapDialog::show() {
  this->QDialog::show();
}


askSaveFileDialog::askSaveFileDialog(QString content, StandardButtons buttons){
  this->setIcon(QMessageBox::Question);
  this->setWindowTitle(tr("Save Files"));
  this->setText(content);
  this->setStandardButtons(buttons);
  this->setDefaultButton(QMessageBox::SaveAll);
}

void askSaveFileDialog::show() {
  return this->open();
}


}


#endif
