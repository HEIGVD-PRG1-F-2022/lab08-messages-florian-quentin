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


#include <typeinfo>
#include <type_traits>
#include <vector>
#include <string>
#include "emails/Email.h"
#include "Toots/Toot.h"

using namespace std;

template<typename T>
class Afficher
{
    std::vector<T> elements;

public:
    Afficher();

    void ajouter_element(T el);
    size_t afficher_liste();
    void afficher_element(size_t el);
};

#include "Afficher.tpp"
#endif//INC_08_MESSAGES_AFFICHER_H
