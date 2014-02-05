#include "bd.h"

/**
 * @brief BD::BD
 */
BD::BD(){
}

/**
 * @brief BD::~BD
 */
BD::~BD(){

}

/**
 * @brief BD::createPhoto
 * @param place
 * @param name
 * @param acquisition_date
 * @param path_name
 * @return
 */
intrusive_ptr<Multimedia> BD::createPhoto(string place, string name, float acquisition_date, string path_name){
    return this->multimedias[name] = new Photo(place, name , acquisition_date, path_name);
}

/**
 * @brief BD::createVideo
 * @param duration
 * @param name
 * @param acquisition_date
 * @param path_name
 * @return
 */
intrusive_ptr<Multimedia> BD::createVideo(float duration, string name, float acquisition_date, string path_name){
    return this->multimedias[name] = new Video(duration, name, acquisition_date, path_name);
}

/**
 * @brief BD::createFilm
 * @param number_chapters
 * @param duration
 * @param name
 * @param acquisition_date
 * @param path_name
 * @return
 */
intrusive_ptr<Multimedia> BD::createFilm(int number_chapters, float duration, string name, float acquisition_date, string path_name){
    return this->multimedias[name] = new Film(number_chapters, duration, name, acquisition_date, path_name);
}

/**
 * @brief BD::createGroup
 * @param name
 * @return
 */
intrusive_ptr<Group> BD::createGroup(string name){
    return this->groups[name] = new Group(name);
}

/**
 * @brief BD::deleteMultimedia
 * @param name
 */
void BD::deleteMultimedia(string name){
    intrusive_ptr<Multimedia> m = this->multimedias.find(name);
    for (map<string, intrusive_ptr<Group> >::iterator it = this->groups.begin(); it != this->groups.end(); ++it)
        it->remove(m);
}

/**
 * @brief BD::deleteGroup
 * @param name
 */
void BD::deleteGroup(string name){
    this->groups.erase(name);
}

/**
 * @brief BD::searchMultimedia
 * @param name
 */
void BD::searchMultimedia(string name) const{
    intrusive_ptr<Multimedia> m = this->multimedias.find(name);
    m->showMultimedia();
}

/**
 * @brief BD::searchGroup
 * @param name
 */
void BD::searchGroup(string name) const{
    intrusive_ptr<Group> g = this->groups.find(name);
    g->getName();
    g->showGroup();
}

/**
 * @brief BD::playMultimedia
 * @param name
 */
void BD::playMultimedia(string name) const{
    intrusive_ptr<Multimedia> m = this->multimedias.find(name);
    m->playMultimedia();
}
