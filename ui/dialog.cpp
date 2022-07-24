#ifndef UI_DIALOG_CPP
#define UI_DIALOG_CPP


#include "./dialog.hpp"


namespace dm::ui {


SelectMapDialog::SelectMapDialog(QWidget* parent) {
  this->setModal(true);
}

inline void SelectMapDialog::show() {
  this->QDialog::show();
}


askSaveFileDialog::askSaveFileDialog(QWidget* parent, QString content,
                                     StandardButtons buttons) {
  setParent(parent);
  this->setIcon(QMessageBox::Question);
  this->setWindowTitle(tr("Save Files"));
  this->setText(content);
  this->setStandardButtons(buttons);
  this->setDefaultButton(QMessageBox::SaveAll);
}

int askSaveFileDialog::exec() {
  return this->QMessageBox::exec();
}


}


#endif
