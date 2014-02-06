#include <iostream>
#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"
#include "bd.h"
#include "TCPServer.h"

using namespace std;

int main(int argc, char** argv) {

    /*
    Multimedia* m = new Multimedia("m", 1, "path");
    m->showMultimedia();
    */

    /*
    Multimedia** tab = new Multimedia*[10];
    int count = 0;

    tab[count++] = new Photo("Brésil", "m1" , 1, "path1");
    tab[count++] = new Video(1, "m2" , 2, "path2");

    for (int k = 0; k < count; k++) {
        tab[k]->showMultimedia();
    }
    */

    /*Film* f = new Film(10, 1, "m2" , 2, "path2");
    int* tab = new int[10];
    int count = 0;

    tab[count++] = 1;
    tab[count++] = 2;
    tab[count++] = 3;

    f->setChapters_duration(tab);

    f->showMultimedia();

    delete (tab);

    f->showMultimedia();
    */

    /*
    Multimedia* m1 = new Photo("Brésil", "m1" , 1, "path1");
    Multimedia* m2 = new Video(1, "m2" , 2, "path2");

    Group g;
    g.push_back(m1);
    g.push_back(m2);
    g.showGroup();

    Group g2;
    g2.push_back(m2);
    g2.showGroup();

    delete(m1);
    delete(m2);
    */

    /*
    intrusive_ptr<Multimedia> m1 = new Photo("Brésil", "m1" , 1, "path1");
    intrusive_ptr<Multimedia> m2 = new Video(1, "m2" , 2, "path2");

    intrusive_ptr<Group> g = new Group();
    g->push_back(m1);
    g->push_back(m2);

    m1 = NULL;
    m2 = NULL;
    g = NULL;
    */

    /*
    BD* bd = new BD();

    intrusive_ptr<Multimedia> m1 = bd->createPhoto("Brésil", "m1" , 1, "path1");
    bd->createVideo(1, "m2" , 2, "path2");

    bd->searchMultimedia("m1");

    bd->deleteMultimedia("m2");

    intrusive_ptr<Group> g = bd->createGroup("g");

    g->push_back(m1);

    bd->searchGroup("g");

    bd->deleteGroup("g");

    bd->searchMultimedia("m1");

    bd->deleteMultimedia("m1");

    */

    BD* bd = new BD();

    bd->createPhoto("Brésil", "neve_photo.jpg" , 1, "/Users/Wesley/Desktop/");
    bd->createVideo(1, "neve_video.mp4" , 2, "/Users/Wesley/Desktop/");

    TCPServer* s = new TCPServer(bd);

    s->run(3331);

}
