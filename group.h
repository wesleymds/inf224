#ifndef GROUP_H
#define GROUP_H

#include <tr1/memory>
#include <list>
#include <string>
#include "multimedia.h"
#include "intrusive_ptr.h"


using std::tr1::shared_ptr;
using namespace std;

class Group : public list<shared_ptr<Multimedia> >
{
private:
    /**
     * @brief name Nom du groupe
     */
    string name;

public:
    Group();
    Group(string name);
    virtual ~Group();
    virtual string getName() const;
    virtual void showGroup() const;
};

#endif // GROUP_H
