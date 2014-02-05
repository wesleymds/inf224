#ifndef GROUP_H
#define GROUP_H

//#define SMART_PTR_DEBUG_MESSAGES
//#define SMART_PTR_DEBUG

#include <list>
#include <string>
#include "multimedia.h"
#include "intrusive_ptr.h"

using namespace std;

/**
 * @brief The Group class
 */
class Group : public list<intrusive_ptr<Multimedia> >, public Pointable
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
