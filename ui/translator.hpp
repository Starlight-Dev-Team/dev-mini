#ifndef TRANSLATOR_H
#define TRANSLATOR_H


#include <QDebug>
#include <QApplication>
#include <QTranslator>

class Translator : public QTranslator
{
public:
    Translator(QApplication &qtApp);
};

#endif // TRANSLATOR_H
