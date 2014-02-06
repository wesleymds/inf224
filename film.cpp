#include <iostream>
#include <sstream>
#include "film.h"

using namespace std;

/**
 * @brief Film::Film
 */
Film::Film() : Video(){
}

/**
 * @brief Film::Film
 * @param number_chapters Nombre de chapitres
 * @param duration Durée
 * @param name Nom
 * @param acquisition_date Date d'aquisition
 * @param path_name Nom du fichier
 */
Film::Film(int number_chapters, float duration, string name, float acquisition_date,
           string path_name) : Video(duration, name, acquisition_date, path_name){
    this->chapters_duration = new int[number_chapters];
    this->number_chapters = number_chapters;
}

/**
 * @brief Film::~Film
 */
Film::~Film(){
    delete(this->chapters_duration);
}

/**
 * @brief Film::getChapters_info
 * @return Tableau de durées et le nombre de chapitres
 */
const int* Film::getChapters_info() const{
    return this->chapters_duration;
}

/**
 * @brief Film::setChapters_duration
 * @param chapters_duration Tableau de durées
 */
void Film::setChapters_duration(const int* chapters_duration){
    for(int i = 0; i<this->number_chapters; i++){
        this->chapters_duration[i] = chapters_duration[i];
    }

    return;
}

/**
 * @brief Film::showMultimedia Méthode d'affichage
 */
string Film::showMultimedia() const{
    stringstream info;
    info << "Durée des chapitres: [";
    for(int i = 0; i<this->number_chapters; i++){
        info << this->chapters_duration[i] << " ";
        //cout << this->chapters_duration[i] << " ";
    }
    info << "] " << Video::showMultimedia();
    //cout << endl;
    return info.str();
}

/**
 * @brief Film::playMultimedia Jouer
 */
void Film::playMultimedia() const{
    string path_name(this->getPath_name());
    string name(this->getName());
    string player("open -a VLC ");
    string parameter("");
    string command = player + path_name + name + parameter;
    system(command.c_str());
    return;
}

