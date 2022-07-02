#include "map.h"

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
