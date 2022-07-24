#ifndef MINI_MAP_HPP
#define MINI_MAP_HPP


#include <QtCore/QString>


namespace dm::mini {


class Map {
 public:
  Map(QString mapId, qint32 mapApiId);
 private:
  QString id;
  qint32 apiId;
};


}


#endif // MINI_MAP_HPP
