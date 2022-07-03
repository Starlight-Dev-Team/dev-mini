#ifndef MAP_HPP
#define MAP_HPP

#include <QString>

namespace dm::mini
{

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

} // NAMESPACE dm::mini


#endif // MAP_HPP
