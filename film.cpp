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
 * @param nb_chapters Nombre de chapitres
 */
Film::Film(int number_chapters)
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
string Film::getChapters_info() const{
    string info = to_string(this->number_chapters);
    for(int i; i<this->number_chapters; i++){
        info.append(to_string(this->chapters_duration[i]));
    }
    return info;
}

/**
 * @brief Film::setChapters_duration
 * @param chapters_duration Tableau de durées
 */
void Film::setChapters_duration(int* chapters_duration){
    for(int i; i<this->number_chapters; i++){
        this->chapters_duration[i] = chapters_duration[i];
    }
}

/**
 * @brief Film::showFilm Méthode d'affichage
 */
void Film::showFilm() const{
    for(int i; i<this->number_chapters; i++){
        cout << this->chapters_duration[i] << "\n";
    }
    cout << endl;
}
