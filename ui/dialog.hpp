#ifndef UI_DIALOG_HPP
#define UI_DIALOG_HPP

#include "../mini/map.hpp"
#include "../mini/app.hpp"

#include <QMessageBox>
#include <QTabWidget>
#include <QDialogButtonBox>
#include <QDialog>

namespace dm::ui
{

class SelectMapDialog : protected QDialog
{

public:
    SelectMapDialog(const dm::mini::App &defaultApp = dm::mini::App());
    inline void show();
protected:
    QTabWidget* appTab = new QTabWidget(this);
    QDialogButtonBox* bottomButtonBox = new QDialogButtonBox(
                QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
};


class AskSaveFileDialog : public QMessageBox
{
public:
    AskSaveFileDialog(QString content = tr("Save changes?"),
                      StandardButtons buttons = StandardButtons(
                QMessageBox::SaveAll | QMessageBox::Discard
                | QMessageBox::Cancel));
};

} // NAMESPACE dm::ui




#endif // UI_DIALOG_HPP
