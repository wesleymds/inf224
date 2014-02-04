#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <string>
#include <stdlib.h>

using namespace std;

class Multimedia
{
private:
    /**
     * @brief name Nom de l'objet multimedia
     */
    string name;
    /**
     * @brief acquisition_date Date d'acquisition de l'objet multimedia
     */
    float acquisition_date;
    /**
     * @brief path_name Nom du fichier associé à l'objet multimédia
     */
    string path_name;

public:
    Multimedia();
    Multimedia(string name, float acquisition_date, string path_name);
    virtual ~Multimedia();

    virtual string getName() const;
    virtual float getAcquisition_date() const;
    virtual string getPath_name() const;
    virtual void setName(string name);
    virtual void setAcquisition_date(float acquisition_date);
    virtual void setPath_name(string path_name);
    virtual void showMultimedia() const;
    virtual void playMultimedia() const = 0;
};

#endif // MULTIMEDIA_H
