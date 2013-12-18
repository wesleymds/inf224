#include <iostream>
#include "multimedia.h"

using namespace std;

Multimedia::Multimedia(string name, float acquisition_date, string path_name){
    this->name = name;
    this->acquisition_date = acquisition_date;
    this->path_name = path_name;
}

Multimedia::~Multimedia(){
}

string Multimedia::getName() const{
    return this->name;
}

float Multimedia::getAcquisition_date() const{
    return this->acquisition_date;
}

string Multimedia::getPath_name() const{
    return this->path_name;
}

void Multimedia::setName(string name){
    this->name = name;
}

void Multimedia::setAcquisition_date(float acquisition_date){
    this->acquisition_date = acquisition_date;
}

void Multimedia::setPath_name(string path_name){
    this->path_name = path_name;
}

void Multimedia::showMultimedia() const{
    cout << this->name << this->acquisition_date << this->path_name << endl;
}




