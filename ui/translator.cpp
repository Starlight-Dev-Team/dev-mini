#include "translator.hpp"

namespace dm::ui
{

Translator::Translator(QApplication &qtApp)
{
    qDebug() << this->load("i18n/zh-CN.qm");
    qtApp.installTranslator(this);
}


} // NAMESPACE dm::ui

