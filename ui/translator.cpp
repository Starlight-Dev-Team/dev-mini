#include "./translator.hpp"


namespace dm::ui {


Translator::Translator(QApplication *parent) {
  // translator->load("i18n/");
  parent->installTranslator(translator);
}


} // namespace dm::ui
