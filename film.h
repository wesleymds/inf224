#ifndef FILM_H
#define FILM_H

#include "video.h"

class Film : public Video
{
private:
    /**
     * @brief chapters_duration Tableau d'entiers contenant la durée de chaque chapitre
     */
    int* chapters_duration;
    /**
     * @brief nb_chapters Nombre de chapitres
     */
    int number_chapters;

public:
    Film();
    Film(int number_chapters, float duration, string name, float acquisition_date, string path_name);
    virtual ~Film();

    virtual const int* getChapters_info() const;
    virtual void setChapters_duration(const int* chapters_duration);
    virtual void showMultimedia() const;
    virtual void playMultimedia() const;
};

#endif // FILM_H