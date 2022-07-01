#ifndef UI_WORKSPACE_HPP
#define UI_WORKSPACE_HPP


#include <QtCore/QList>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMdiSubWindow>


namespace dm::ui {


class WorkspaceDocument : protected QMdiSubWindow {
 public:
};

class Workspace : protected QMdiArea {
 public:
  Workspace();
  // inline QList<WorkspaceDocument*> getDocumentList();
  inline void addDocument(WorkspaceDocument* document);
  inline void showDocument(WorkspaceDocument* document);
  inline void closeDocument(WorkspaceDocument* document);
 protected:
  QList<WorkspaceDocument*> documentList;
};


}


#endif // UI_WORKSPACE_HPP
