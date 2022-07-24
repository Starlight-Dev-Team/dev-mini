#ifndef DM_UI_OBJECT
#define DM_UI_OBJECT


#include <QtCore/QObject>


namespace dm::ui {


class Object : public QObject {
  Q_OBJECT
 public:
  Object();
  virtual ~Object();
};


}


#endif // macro DM_UI_OBJECT
