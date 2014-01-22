#include <iostream>
#include "photo.h"

using namespace std;

/**
 * @brief Photo::Photo
 */
Photo::Photo() : Multimedia(){
}

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
 * @brief Photo::showMultimedia Méthode d'affichage
 */
void Photo::showMultimedia() const{
    Multimedia::showMultimedia();
    cout << this->place << endl;
    return;
}

/**
 * @brief Photo::playMultimedia Afficher
 */
void Photo::playMultimedia() const{
    string path_name(this->getPath_name());
    string name(this->getName());
    string player("mspaint ");
    string parameter(" &");
    string command = player + path_name + name + parameter;
    system(command.c_str());
    return;
}

