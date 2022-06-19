#ifndef UI_TRANSLATOR_H_
#define UI_TRANSLATOR_H_

#include <QtCore/QString>
#include <QtCore/QLocale>
#include <QtCore/QTranslator>
#include <QtWidgets/QApplication>

namespace dm::ui{

class Translator : public QTranslator {
 Q_OBJECT
 public:
  Translator(QApplication &qtApp);
  ~Translator();
};

}

#endif // UI_TRANSLATOR_H_
