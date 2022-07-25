#ifndef DM_UI_TRANSLATOR
#define DM_UI_TRANSLATOR


#include <QtCore/QDebug>
#include <QtCore/QString>
#include <QtCore/QTranslator>
#include <QtWidgets/QApplication>


#include "object.hpp"


namespace dm::ui{


class Translator : public Object {
 public:
  Translator(QApplication *parent);
 private:
  QTranslator* translator = new QTranslator(this);
};


} // namespace dm::ui


#endif // macro DM_UI_TRANSLATOR
