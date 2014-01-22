#include "group.h"

using namespace std;

/**
 * @brief Group::Group
 */
Group::Group() : list(){

}

/**
 * @brief Group::Group
 * @param name Nom du groupe
 */
Group::Group(string name) : list(){
    this->name = name;
}

/**
 * @brief Group::~Group
 */
Group::~Group(){
}

/**
 * @brief Group::getName
 * @return Nom du groupe
 */
string Group::getName() const{
    return this->name;
}

/**
 * @brief Group::showGroup Affiche les attributs de toutes les objets de la liste
 */
void Group::showGroup() const{
    for (Group::const_iterator it = this->begin(); it != this->end(); it++)
        (*it)->showMultimedia();
    return;
}
