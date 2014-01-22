#ifndef PHOTO_H
#define PHOTO_H

#include "multimedia.h"

using namespace std;

class Photo : public Multimedia
{
private:
    /**
     * @brief place Lieu géographique
     */
    string place;
public:
    Photo();
    Photo(string place, string name, float acquisition_date, string path_name);
    virtual ~Photo();

    virtual string getPlace() const;
    virtual void setPlace(string place);
    virtual void showMultimedia() const;
    virtual void playMultimedia() const;
};

#endif // PHOTO_H
