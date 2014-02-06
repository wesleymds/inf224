#include <iostream>
#include <sstream>
#include "multimedia.h"

using namespace std;

/**
 * @brief Multimedia::Multimedia
 */
Multimedia::Multimedia()
{}

/**
 * @brief Multimedia::Multimedia
 * @param name Nom
 * @param acquisition_date Date d'aquisition
 * @param path_name Nom du fichier
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
    cout << this->getName() << endl;
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
 * @param name Nom
 */
void Multimedia::setName(string name){
    this->name = name;
    return;
}

/**
 * @brief Multimedia::setAcquisition_date
 * @param acquisition_date Date d'aquisition
 */
void Multimedia::setAcquisition_date(float acquisition_date){
    this->acquisition_date = acquisition_date;
    return;
}

/**
 * @brief Multimedia::setPath_name
 * @param path_name Nom du fichier
 */
void Multimedia::setPath_name(string path_name){
    this->path_name = path_name;
    return;
}

/**
 * @brief Multimedia::showMultimedia Méthode d'affichage
 */
string Multimedia::showMultimedia() const{
    stringstream info;
    info << this->name + " " << this->acquisition_date << " " << this->path_name << endl;
    return info.str();
    //cout << this->name << " " << this->acquisition_date << " " << this->path_name << endl;
}
