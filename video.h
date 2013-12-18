#ifndef VIDEO_H
#define VIDEO_H

class Video
{
private:
    /**
     * @brief duration Durée
     */
    float duration;
public:
    Video();
    Video(string duration);
    virtual ~Video();

    virtual string getDuration() const;
    virtual void setDuration(string duration);
};

#endif // VIDEO_H
