#ifndef DM_UI_WORKSPACE
#define DM_UI_WORKSPACE


#include <QtCore/QVector>
#include <QtWidgets/QWidget>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMdiSubWindow>


#include "../global/error.hpp"


namespace dm::ui {


class WorkspaceError : public Error {
 public:
  enum ErrorType {
    UNKNOWN = 0x0000,
    ALREADY_EXISTS = 0X0001,
    TOO_MANY = 0X0002,
    BAD_TYPE = 0x0004
  };
  WorkspaceError(ErrorType newType);
  ~WorkspaceError();
};


class WorkspaceDoc : public QObject {
  Q_OBJECT
 public:
  enum DOC_TYPE {
    BLANK = 0x0000,
    WEB_VIEW = 0x0001,
    MAP = 0x0002
  };
  DOC_TYPE getDocType() const;
 private:
  QMdiSubWindow *mdiSubWindowWidget;
  QString docType;
};

class Workspace : public QObject {
  Q_OBJECT
 public:
  Workspace(QWidget *parent = nullptr);
  inline const QList<WorkspaceDoc*> getAllDoc();
  inline void addDocument(WorkspaceDoc *document);
  inline void showDocument(WorkspaceDoc *document);
  inline void closeDocument(WorkspaceDoc *document);
 private:
  QMdiArea *mdiWidget;
  QVector<WorkspaceDoc*> docList;
};


} // namespace dm::ui


#endif // macro DM_UI_WORKSPACE
