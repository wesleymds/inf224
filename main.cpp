#include <iostream>
#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"

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

    Film* f = new Film(10, 1, "m2" , 2, "path2");
    int* tab = new int[10];
    int count = 0;

    tab[count++] = 1;
    tab[count++] = 2;
    tab[count++] = 3;

    f->setChapters_duration(tab);

    f->showMultimedia();

    delete (tab);

    f->showMultimedia();
}
