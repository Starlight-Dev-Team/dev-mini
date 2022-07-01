#ifndef UI_WORKSPACE_CPP
#define UI_WORKSPACE_CPP


#include "workspace.hpp"


namespace dm::ui {


Workspace::Workspace() {
  this->setTabsClosable(true);
  this->setTabsMovable(true);
  this->setViewMode(QMdiArea::TabbedView);
}

/*inline QList<WorkspaceDocument*> Workspace::getDocumentList() {
  return this->subWindowList();
}*/
inline void Workspace::addDocument(WorkspaceDocument *document) {
  this->documentList.push_back(document);
}
inline void Workspace::showDocument(WorkspaceDocument *document) {}
inline void Workspace::closeDocument(WorkspaceDocument *document) {}

}


#endif
