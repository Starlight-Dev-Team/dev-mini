#include "ui/translator.h"

namespace dm::ui {

Translator::Translator(QApplication &qtApp) {
  const QStringList uiLanguages = QLocale::system().uiLanguages();
  for (const QString &locale : uiLanguages) {
    const QString baseName = "i18n/" + QLocale(locale).name();
    if (this->load(":/i18n/" + baseName)) {
      qtApp.installTranslator(this);
      break;
    }
  }
}
Translator::~Translator() {
  ;
}

}
