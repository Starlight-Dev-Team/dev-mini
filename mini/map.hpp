#ifndef MINI_MAP_HPP
#define MINI_MAP_HPP


#include <QtCore/QString>


namespace dm::mini {


class MapId {
 public:
  MapId(QString localId = "");
  inline QString getLocalId();
  void setLocalId(QString localId);
 private:
  QString localId;
};


class Map {
 public:
  Map(MapId id);
  ~Map();
 private:
  MapId id;
};


}


#endif // MINI_MAP_HPP
