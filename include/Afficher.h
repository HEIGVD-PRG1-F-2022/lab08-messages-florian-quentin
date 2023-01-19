// ================================================================================
// File : Afficher.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#ifndef INC_08_MESSAGES_AFFICHER_H
#define INC_08_MESSAGES_AFFICHER_H


#include "Email.h"
#include "Toot.h"
#include <string>
#include <type_traits>
#include <typeinfo>
#include <vector>

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

#include "../src/Afficher.tpp"
#endif//INC_08_MESSAGES_AFFICHER_H
