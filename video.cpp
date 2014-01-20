#include <iostream>
#include "video.h"

using namespace std;

/**
 * @brief Video::Video
 */
Video::Video()
{}

/**
 * @brief Video::Video
 * @param duration Durée
 */
Video::Video(float duration, string name, float acquisition_date, string path_name) : Multimedia(name, acquisition_date, path_name)
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
float Video::getDuration() const{
    return this->duration;
}

/**
 * @brief Video::setDuration
 * @param duration Durée
 */
void Video::setDuration(float duration){
    this->duration = duration;
}

/**
 * @brief Video::showMultimedia Aflicher la valeur des attributs de l'objet multimedia
 */
void Video::showMultimedia() const{
    Multimedia::showMultimedia();
    cout << this->duration << endl;
}
