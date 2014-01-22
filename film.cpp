#include <iostream>
#include "film.h"

using namespace std;

/**
 * @brief Film::Film
 */
Film::Film()
{}

/**
 * @brief Film::Film
 * @param number_chapters Nombre de chapitres
 * @param duration Durée
 * @param name Nom
 * @param acquisition_date Date d'aquisition
 * @param path_name Nom du fichier
 */
Film::Film(int number_chapters, float duration, string name, float acquisition_date, string path_name) : Video(duration, name, acquisition_date, path_name)
{
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
void Film::showMultimedia() const{
    Video::showMultimedia();
    for(int i = 0; i<this->number_chapters; i++){
        cout << this->chapters_duration[i] << " ";
    }
    cout << endl;

    return;
}

/**
 * @brief Film::playMultimedia Jouer
 */
void Film::playMultimedia() const{
    string path_name(this->getPath_name());
    string name(this->getName());
    string player("mplayer ");
    string parameter(" &");
    string command = player + path_name + name + parameter;
    system(command.c_str());
    return;
}

