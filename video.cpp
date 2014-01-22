#include <iostream>
#include "video.h"

using namespace std;

/**
 * @brief Video::Video
 */
Video::Video() : Multimedia(){
}

/**
 * @brief Video::Video
 * @param duration Durée
 * @param name Nom
 * @param acquisition_date Date d'aquisition
 * @param path_name Nom du fichier
 */
Video::Video(float duration, string name, float acquisition_date, string path_name) : Multimedia(name, acquisition_date, path_name){
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
    return;
}

/**
 * @brief Video::showMultimedia Méthode d'affichage
 */
void Video::showMultimedia() const{
    Multimedia::showMultimedia();
    cout << this->duration << endl;
    return;
}

/**
 * @brief Video::playMultimedia Jouer
 */
void Video::playMultimedia() const{
    string path_name(this->getPath_name());
    string name(this->getName());
    string player("mplayer ");
    string parameter(" &");
    string command = player + path_name + name + parameter;
    system(command.c_str());
    return;
}
