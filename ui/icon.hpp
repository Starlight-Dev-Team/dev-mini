#ifndef UI_ICON_HPP
#define UI_ICON_HPP


#include <QtGui/QIcon>


namespace dm::ui {


class Icon : protected QIcon {
 public:
  static QIcon openFolder;
  static QIcon plus;
  static QIcon question;
};


}


#endif
