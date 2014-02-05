#ifndef VIDEO_H
#define VIDEO_H

#include "multimedia.h"

/**
 * @brief The Video class
 */
class Video : public Multimedia
{
private:
    /**
     * @brief duration Durée
     */
    float duration;
public:
    Video();
    Video(float duration, string name, float acquisition_date, string path_name);
    virtual ~Video();

    virtual float getDuration() const;
    virtual void setDuration(float duration);
    virtual void showMultimedia() const;
    virtual void playMultimedia() const;
};

#endif // VIDEO_H
