#ifndef DM_GLOBAL_ERROR
#define DM_GLOBAL_ERROR


#include <QtCore/QString>


namespace dm {


class Error {
 public:
  Error(QString errorMessage);
  virtual ~Error();
  int getLevel() const;
  QString getMessage() const;
 private:
  int level;
  QString message;
};


} // namespace dm


#endif // macro DM_GLOBAL_ERROR
