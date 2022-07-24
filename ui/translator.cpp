#include "./translator.hpp"


namespace dm::ui {


Translator::Translator(const QApplication& qtApp) {
  qDebug() << this->load("i18n/zh-CN.qm");
  qtApp.installTranslator(this);
}


} // namespace dm::ui
