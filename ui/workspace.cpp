#include "./workspace.hpp"


namespace dm::ui {


Workspace::Workspace(QWidget *parent) {
  mdiWidget->setParent(parent);
  mdiWidget->setTabsClosable(true);
  mdiWidget->setTabsMovable(true);
  mdiWidget->setViewMode(QMdiArea::TabbedView);
}

inline const QVector<WorkspaceDoc*> Workspace::getAllDoc() {
  QVector<WorkspaceDoc*> docListCopy(docList); // deep copy
  return docListCopy;
}
inline void Workspace::addDocument(WorkspaceDoc *doc) {
  switch (doc->getDocType()) {
    case WorkspaceDoc::DOC_TYPE::MAP: {
      docList.push_back(doc);
      break;
    }
    default: {
      throw "";
    }
  }
}
inline void Workspace::showDocument(WorkspaceDoc *doc) {
  if (doc == nullptr) {
    // hide
  }
}
inline void Workspace::closeDocument(WorkspaceDoc *doc) {}

}

