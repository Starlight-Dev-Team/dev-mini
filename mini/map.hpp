#ifndef MAP_H
#define MAP_H

#include <QString>

class MapId
{
public:
    MapId(const QString &localId = "");
    inline const QString& getLocalId();
    void setLocalId(const QString &localId);
private:
    QString localId;
};


class Map
{
public:
    Map(MapId id);
    ~Map();
private:
    MapId id;
};


#endif // MAP_H
