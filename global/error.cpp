#include "./error.hpp"


namespace dm {


Error::Error() {}
Error::Error(ErrorLevel newLevel, QString &newMessage) {
  setLevel(newLevel);
  setMessage(newMessage);
}
Error::~Error() {}

Error::ErrorLevel Error::getLevel() const {
  return level;
}
void Error::setLevel(ErrorLevel newLevel) {
  level = newLevel;
}

QString Error::getMessage() const throw() {
  return message;
}
void Error::setMessage(const QString &newMessage) {
  message = newMessage;
}


} // namespace dm
