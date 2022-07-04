#ifndef UI_DIALOG_CPP
#define UI_DIALOG_CPP


#include "dialog.hpp"

namespace dm::ui
{


SelectMapDialog::SelectMapDialog(const dm::mini::App &defaultApp)
{
  this->setModal(true);
}

inline void SelectMapDialog::show()
{
  this->QDialog::show();
}


AskSaveFileDialog::AskSaveFileDialog(QString content, StandardButtons buttons)
{
  this->setIcon(QMessageBox::Question);
  this->setWindowTitle(tr("Save Files"));
  this->setText(content);
  this->setStandardButtons(buttons);
  this->setDefaultButton(QMessageBox::SaveAll);
}


} // NAMESAPCE dm::ui


#endif // UI_DIALOG_CPP