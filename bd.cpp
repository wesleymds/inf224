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
intrusive_ptr<Photo> BD::createPhoto(string place, string name, float acquisition_date, string path_name){
    intrusive_ptr<Photo> p = new Photo(place, name , acquisition_date, path_name);
    this->multimedias[name] = p;
    return p;
}

/**
 * @brief BD::createVideo
 * @param duration
 * @param name
 * @param acquisition_date
 * @param path_name
 * @return
 */
intrusive_ptr<Video> BD::createVideo(float duration, string name, float acquisition_date, string path_name){
    intrusive_ptr<Video> v = new Video(duration, name, acquisition_date, path_name);
    this->multimedias[name] = v;
    return v;
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
intrusive_ptr<Film> BD::createFilm(int number_chapters, float duration, string name, float acquisition_date, string path_name){
    intrusive_ptr<Film> f = new Film(number_chapters, duration, name, acquisition_date, path_name);
    this->multimedias[name] = f;
    return f;
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
    map<string, intrusive_ptr<Multimedia> >::const_iterator m = this->multimedias.find(name);
    for (map<string, intrusive_ptr<Group> >::const_iterator it = this->groups.begin(); it != this->groups.end(); ++it)
        (it->second)->remove(m->second);
    this->multimedias.erase(name);
    return;
}

/**
 * @brief BD::deleteGroup
 * @param name
 */
void BD::deleteGroup(string name){
    this->groups.erase(name);
    return;
}

/**
 * @brief BD::searchMultimedia
 * @param name
 */
string BD::searchMultimedia(string name) const{
    map<string, intrusive_ptr<Multimedia> >::const_iterator m = this->multimedias.find(name);
    return (m->second)->showMultimedia();
}

/**
 * @brief BD::searchGroup
 * @param name
 */
void BD::searchGroup(string name) const{
    map<string, intrusive_ptr<Group> >::const_iterator g = this->groups.find(name);
    cout << (g->second)->getName() << endl;
    (g->second)->showGroup();
    return;
}

/**
 * @brief BD::playMultimedia
 * @param name
 */
void BD::playMultimedia(string name) const{
    map<string, intrusive_ptr<Multimedia> >::const_iterator m = this->multimedias.find(name);
    (m->second)->playMultimedia();
    return;
}
