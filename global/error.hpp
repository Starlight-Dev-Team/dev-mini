#ifndef DM_GLOBAL_ERROR
#define DM_GLOBAL_ERROR


#include <QtCore/QString>


namespace dm {


class Error {
 public:
  enum ErrorLevel{
    DEBUG = 0x0001,
    INFO = 0x0002,
    WARN = 0x0004,
    ERROR = 0x0008,
    FATAL = 0x0010
  };
  Error();
  Error(ErrorLevel newLevel, QString &newMessage);
  virtual ~Error();
  ErrorLevel getLevel() const;
  void setLevel(ErrorLevel newLevel);
  QString getMessage() const throw();
  void setMessage(const QString &newMessage);
 private:
  ErrorLevel level;
  QString message;
};


} // namespace dm


#endif // macro DM_GLOBAL_ERROR
