#ifndef MINI_MAP_CPP
#define MINI_MAP_CPP


#include "map.hpp"

namespace dm::mini
{

MapId::MapId(const QString &localId)
{
    this->localId = localId;
}


const QString& MapId::getLocalId()
{
    return localId;
}


void MapId::setLocalId(const QString &localId)
{
    this->localId = localId;
}


Map::Map(MapId id)
{
    this->id = id;
}


Map::~Map()
{
    // todo
}

} // NAMESPACE dm::mini


#endif // MINI_APP_CPP