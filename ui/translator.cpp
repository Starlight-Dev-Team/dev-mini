#ifndef UI_TRANLATOR_CPP
#define UI_TRANLATOR_CPP


#include "translator.hpp"


namespace dm::ui {


Translator::Translator(QApplication& qtApp) {
  qDebug() << this->load("i18n/zh-CN.qm");
  qtApp.installTranslator(this);
}


}


#endif
