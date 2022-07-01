#ifndef UI_ICON_HPP
#define UI_ICON_HPP


#include <QtGui/QIcon>

// #include "icon.hpp"


namespace dm::ui {


class Icon : protected QIcon {
 public:
  static QIcon openFolder;
  static QIcon plus;
  static QIcon question;
};


QIcon Icon::openFolder = QIcon(":/icon/openFolder");
QIcon Icon::plus = QIcon(":/icon/plus");
QIcon Icon::question = QIcon(":/icon/question");


}


#endif
