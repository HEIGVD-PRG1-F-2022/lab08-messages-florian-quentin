// ================================================================================
// File : Afficher.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// File created by Florian Duruz
// ================================================================================

//
// Created by Florian Duruz on 17/01/2023.
//

#ifndef INC_08_MESSAGES_AFFICHER_H
#define INC_08_MESSAGES_AFFICHER_H


#include <string>
#include "BaseLecture.h"

using namespace std;

template<typename T>
class Afficher
{

public:
    Afficher();

    void ajouter_element(T el);
    size_t afficher_liste();
    void afficher_element(size_t el);
};


#endif//INC_08_MESSAGES_AFFICHER_H
