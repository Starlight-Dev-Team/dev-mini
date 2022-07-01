#ifndef MINI_App_HPP
#define MINI_App_HPP


#include <QtCore/QString>
#include "map.cpp"


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

inline int App::getApiId() {
  return this->apiId;
}
inline void App::setApiId(int apiId) {
  this->apiId = apiId;
}

inline QString App::getDataPath() {
  return this->dataPath;
}
inline void App::setDataPath(QString dataPath){
  this->dataPath = dataPath;
}


}


#endif // MINI_App_HPP
