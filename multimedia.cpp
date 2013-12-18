#include <iostream>
#include "multimedia.h"

using namespace std;

/**
 * @brief Multimedia::Multimedia
 */
Multimedia::Multimedia(string name, float acquisition_date, string path_name){
    this->name = name;
    this->acquisition_date = acquisition_date;
    this->path_name = path_name;
}

/**
 * @brief Multimedia::~Multimedia
 */
Multimedia::~Multimedia(){
}

/**
 * @brief Multimedia::getName
 * @return Nom
 */
string Multimedia::getName() const{
    return this->name;
}

/**
 * @brief Multimedia::getAcquisition_date
 * @return Date d'aquisition
 */
float Multimedia::getAcquisition_date() const{
    return this->acquisition_date;
}

/**
 * @brief Multimedia::getPath_name
 * @return Nom du fichier
 */
string Multimedia::getPath_name() const{
    return this->path_name;
}

/**
 * @brief Multimedia::setName
 * @param Nom
 */
void Multimedia::setName(string name){
    this->name = name;
}

/**
 * @brief Multimedia::setAcquisition_date
 * @param Date d'aquisition
 */
void Multimedia::setAcquisition_date(float acquisition_date){
    this->acquisition_date = acquisition_date;
}

/**
 * @brief Multimedia::setPath_name
 * @param Nom du fichier
 */
void Multimedia::setPath_name(string path_name){
    this->path_name = path_name;
}

/**
 * @brief Multimedia::showMultimedia Aflicher la valeur des attributs de l'objet multimedia
 */
void Multimedia::showMultimedia() const{
    cout << this->name << this->acquisition_date << this->path_name << endl;
}
