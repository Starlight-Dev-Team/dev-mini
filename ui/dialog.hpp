#ifndef UI_DIALOG_HPP
#define UI_DIALOG_HPP


#include <QtCore/QString>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QDialogButtonBox>

#include "../mini/app"


namespace dm::ui {


class SelectMapDialog : protected QDialog {
 Q_OBJECT
 public:
  SelectMapDialog(QWidget* parent = nullptr);
 public slots:
  inline void show();
 protected:
  QTabWidget* appTab = new QTabWidget(this);
  QDialogButtonBox* bottomButtonBox = new QDialogButtonBox(
      QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
};


class askSaveFileDialog : protected QMessageBox {
 Q_OBJECT
 public:
  askSaveFileDialog(QWidget* parent = nullptr,
                    QString content = tr("Save changes?"),
                    StandardButtons buttons = StandardButtons(
                        QMessageBox::SaveAll | QMessageBox::Discard
                                             | QMessageBox::Cancel));
  int exec();
};


}


#endif
