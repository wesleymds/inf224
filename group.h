#ifndef GROUP_H
#define GROUP_H

#include <list>
#include <string>
#include "multimedia.h"

using namespace std;

class Group : public list<Multimedia*>
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
