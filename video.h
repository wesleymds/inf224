#ifndef VIDEO_H
#define VIDEO_H

#include "multimedia.h"

/**
 * @brief The Video class
 */
class Video : public Multimedia
{

friend class BD;

private:
    /**
     * @brief duration Durée
     */
    float duration;

protected:
    Video();
    Video(float duration, string name, float acquisition_date, string path_name);
    virtual ~Video();

public:
    virtual float getDuration() const;
    virtual void setDuration(float duration);
    virtual string getMultimedia() const;
    virtual void showMultimedia() const;
    virtual void playMultimedia() const;
};

#endif // VIDEO_H
