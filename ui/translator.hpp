#ifndef DM_UI_TRANSLATOR
#define DM_UI_TRANSLATOR


#include <QtCore/QDebug>
#include <QtCore/QString>
#include <QtCore/QTranslator>
#include <QtWidgets/QApplication>


namespace dm::ui{


class Translator : protected QTranslator {
 public:
  Translator(const QApplication &qtApp);
};


} // namespace dm::ui


#endif // macro DM_UI_TRANSLATOR
