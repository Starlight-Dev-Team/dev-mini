#ifndef UI_TRANSLATOR_HPP
#define UI_TRANSLATOR_HPP


#include <QDebug>
#include <QApplication>
#include <QTranslator>

namespace dm::ui
{


class Translator : public QTranslator
{
public:
    Translator(QApplication &qtApp);
};


} // NAMESPACE dm::ui

#endif // UI_TRANSLATOR_HPP
