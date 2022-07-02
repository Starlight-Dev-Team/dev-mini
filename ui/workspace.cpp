#include "workspace.h"

WorkSpace::WorkSpace()
{
  this->setTabsClosable(true);
  this->setTabsMovable(true);
  this->setViewMode(QMdiArea::TabbedView);
}

/*inline QList<WorkSpaceDocument*> WorkSpace::getDocumentList()
  {
  return this->subWindowList();
}*/
inline void WorkSpace::addDocument(WorkSpaceDucument *document)
{
  this->documentList.push_back(document);
}


inline void WorkSpace::showDocument(WorkSpaceDucument *document)
{
    // todo
}
inline void WorkSpace::closeDocument(WorkSpaceDucument *document)
{
    // todo
}

