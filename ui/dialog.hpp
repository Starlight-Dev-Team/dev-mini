#ifndef DIALOG_H
#define DIALOG_H

#include "../mini/map.h"
#include "../mini/app.h"

#include <QMessageBox>
#include <QTabWidget>
#include <QDialogButtonBox>
#include <QDialog>

class SelectMapDialog : protected QDialog {

public:
    SelectMapDialog(const App &defaultApp = App());
    inline void show();
protected:
    QTabWidget* appTab = new QTabWidget(this);
    QDialogButtonBox* bottomButtonBox = new QDialogButtonBox(
                QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
};


class AskSaveFileDialog : public QMessageBox {
public:
    AskSaveFileDialog(QString content = tr("Save changes?"),
                      StandardButtons buttons = StandardButtons(
                QMessageBox::SaveAll | QMessageBox::Discard
                | QMessageBox::Cancel));
};


#endif // DIALOG_H
