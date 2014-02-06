#ifndef BD_H
#define BD_H

#include <map>
#include "multimedia.h"
#include "photo.h"
#include <iostream>
#include "video.h"
#include "film.h"
#include "group.h"

using namespace std;

/**
 * @brief The BD class
 */
class BD
{
private:
    /**
    * @brief groups
    */
   map<string, intrusive_ptr<Group> > groups;
   /**
    * @brief multimedias
    */
   map<string, intrusive_ptr<Multimedia> > multimedias;
public:
   BD();
   virtual ~BD();
   virtual intrusive_ptr<Photo> createPhoto(string place, string name, float acquisition_date, string path_name);
   virtual intrusive_ptr<Video> createVideo(float duration, string name, float acquisition_date, string path_name);
   virtual intrusive_ptr<Film> createFilm(int number_chapters, float duration, string name, float acquisition_date, string path_name);
   virtual intrusive_ptr<Group> createGroup(string name);
   virtual void deleteMultimedia(string name);
   virtual void deleteGroup(string name);
   virtual string searchMultimedia(string name) const;
   virtual void searchGroup(string name) const;
   virtual void playMultimedia(string name) const;
};

#endif // BD_H
