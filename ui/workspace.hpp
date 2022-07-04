#ifndef UI_WORKSPACE_HPP
#define UI_WORKSPACE_HPP

#include <QList>
#include <QMdiArea>
#include <QMdiSubWindow>

namespace dm::ui
{

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

} // NAMESPACE dm::ui



#endif // UI_WORKSPACE_HPP
