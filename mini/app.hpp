#ifndef MINI_App_HPP
#define MINI_App_HPP


#include <QtCore/QString>

#include "./map"


namespace dm::mini {


class App {
 public:
  inline int getApiId();
  inline void setApiId(int apiId);
  inline QString getDataPath();
  inline void setDataPath(QString dataPath);
 private:
  int apiId;
  QString dataPath;
};


}


#endif // MINI_App_HPP
