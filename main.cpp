#include <iostream>
#include "multimedia.h"
#include "photo.h"
#include "video.h"

using namespace std;

int main(int argc, char** argv) {

    /*
    Multimedia* m = new Multimedia("m", 1, "path");
    m->showMultimedia();
    */

    Multimedia** tab = new Multimedia*[10];
    unsigned int count = 0;

    tab[count++] = new Photo("Brésil", "m1" , 1, "path1");
    tab[count++] = new Video(1, "m2" , 2, "path2");

    for (int k = 0; k < count; k++) {
        tab[k]->showMultimedia();
    }

    delete (tab);
}
