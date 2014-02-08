#ifndef PHOTO_H
#define PHOTO_H

#include "multimedia.h"

using namespace std;

/**
 * @brief The Photo class
 */
class Photo : public Multimedia
{

friend class BD;

private:
    /**
     * @brief place Lieu géographique
     */
    string place;
    Photo();
    Photo(string place, string name, float acquisition_date, string path_name);
    virtual ~Photo();

public:
    virtual string getPlace() const;
    virtual void setPlace(string place);
    virtual string getMultimedia() const;
    virtual void showMultimedia() const;
    virtual void playMultimedia() const;
};

#endif // PHOTO_H
