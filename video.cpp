#include "video.h"

/**
 * @brief Video::Video
 * @param duration Durée
 */
Video::Video(string duration)
{
    this->duration = duration;
}

/**
 * @brief Video::~Video
 */
Video::~Video(){
}

/**
 * @brief Video::getduration
 * @return Durée
 */
string Video::getduration() const{
    return this->duration;
}

/**
 * @brief Video::setDuration
 * @param duration Durée
 */
void Video::setDuration(string duration){
    this->duration = duration;
}
