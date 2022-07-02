#include "translator.h"

Translator::Translator(QApplication &qtApp)
{
    qDebug() << this->load("i18n/zh-CN.qm");
    qtApp.installTranslator(this);
}
