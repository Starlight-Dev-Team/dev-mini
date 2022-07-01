#ifndef MINI_APP_CPP
#define MINI_APP_CPP


#include "app.hpp"


namespace dm::mini {


inline QString MapId::getLocalId() {
  return this->localId;
}
void MapId::setLocalId(QString localId) {
  this->localId = localId;
}

Map::Map(MapId id) {
  this->id = id;
}
Map::~Map() {}


}


#endif
