#include "photo.h"

/**
 * @brief Photo::Photo
 * @param place Lieu géographique
 */
Photo::Photo(string place)
{
    this->place = place;
}

/**
 * @brief Photo::~Photo
 */
Photo::~Photo(){
}

/**
 * @brief Photo::getPlace
 * @return Lieu géographique
 */
string Photo::getPlace() const{
    return this->place;
}

/**
 * @brief Photo::setPlace
 * @param place Lieu géographique
 */
void Photo::setPlace(string place){
    this->place = place;
}

