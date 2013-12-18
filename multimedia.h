#include <string>

#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

using namespace std;

class Multimedia
{
private:
    string name;
    float acquisition_date;
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
};

#endif // MULTIMEDIA_H
