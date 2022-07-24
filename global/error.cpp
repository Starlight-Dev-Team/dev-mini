#include "./error.hpp"


namespace dm {


Error::Error(QString errorMessage) {}
Error::~Error() {}

int Error::getLevel() const {
  return level;
}
QString Error::getMessage() const {
  return message;
}


} // namespace dm
