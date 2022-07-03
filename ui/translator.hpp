#ifndef TRANSLATOR_HPP
#define TRANSLATOR_HPP


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

#endif // TRANSLATOR_HPP
