#include <string>

#ifndef PHOTO_H
#define PHOTO_H

using namespace std;

class Photo
{
private:
    /**
     * @brief place Lieu géographique
     */
    string place;
public:
    Photo();
    Photo(string place);
    virtual ~Photo();

    virtual string getPlace() const;
    virtual void setPlace(string place);
};

#endif // PHOTO_H
