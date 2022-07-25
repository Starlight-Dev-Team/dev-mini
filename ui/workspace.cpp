#include "./workspace.hpp"


namespace dm::ui {


WorkspaceError::WorkspaceError(ErrorType newType)
    : Error() {
  ErrorLevel newLevel;
  QString newMessage;
  switch (newType) {
    case UNKNOWN: {
      newLevel = Error::ERROR;
      newMessage = "Unknown workspace error.";
      break;
    }
    case ALREADY_EXISTS: {
      newLevel = Error::INFO;
      newMessage = "Workspace document already exists.";
      break;
    }
    case TOO_MANY: {
      newLevel = Error::ERROR;
      newMessage = "Too many workspace documents.";
      break;
    }
    case BAD_TYPE: {
      newLevel = Error::WARN;
      newMessage = "Bad workspace document type.";
      break;
    }
    default: {
      return;
    }
  }
  setLevel(newLevel);
  setMessage(newMessage);
}
WorkspaceError::~WorkspaceError() {}


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
    case WorkspaceDoc::MAP: {
      docList.push_back(doc);
      break;
    }
    default: {
      throw WorkspaceError(WorkspaceError::BAD_TYPE);
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

