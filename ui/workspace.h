#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QList>
#include <QMdiArea>
#include <QMdiSubWindow>

class WorkSpaceDucument
{
public:

};


class WorkSpace : public QMdiArea
{
public:
    WorkSpace();
    //     inline QList<WorkSpacedocument*> getDocumentList();
    inline void addDocument(WorkSpaceDucument* document);
    inline void showDocument(WorkSpaceDucument* document);
    inline void closeDocument(WorkSpaceDucument* document);
private:
    QList<WorkSpaceDucument*> documentList;
};

#endif // WORKSPACE_H
