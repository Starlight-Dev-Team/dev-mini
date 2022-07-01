#ifndef UI_TRANSLATOR_HPP
#define UI_TRANSLATOR_HPP

#include <QDebug>
#include <QtCore/QString>
#include <QtCore/QTranslator>
#include <QtWidgets/QApplication>


namespace dm::ui{


class Translator : protected QTranslator {
 public:
  Translator(QApplication &qtApp);
};


}


#endif // UI_TRANSLATOR_HPP
