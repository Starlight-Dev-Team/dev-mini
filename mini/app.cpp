#ifndef MINI_APP_CPP
#define MINI_APP_CPP


#include "./app.hpp"


namespace dm::mini {


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


#endif
