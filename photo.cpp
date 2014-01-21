#include <iostream>
#include "photo.h"

using namespace std;

/**
 * @brief Photo::Photo
 */
Photo::Photo()
{}

/**
 * @brief Photo::Photo
 * @param place Lieu géographique
 * @param name Nom
 * @param acquisition_date Date d'aquisition
 * @param path_name Nom du fichier
 */
Photo::Photo(string place, string name, float acquisition_date, string path_name) : Multimedia(name, acquisition_date, path_name)
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
    return;
}

/**
 * @brief Photo::showPhoto Méthode d'affichage
 */
void Photo::showPhoto() const{
    Multimedia::showMultimedia();
    cout << this->place << endl;
    return;
}


