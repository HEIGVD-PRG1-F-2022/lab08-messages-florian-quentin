// ================================================================================
// File : Afficher.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz, Antoine Leresche
// File created by Florian Duruz, Antoine Leresche
// ================================================================================

//
// Created by Florian Duruz, Antoine Leresche on 17/01/2023.
//

#include "../include/Afficher.h"
#include <iostream>


template<typename T>
Afficher<T>::Afficher() {
}

template<typename T>
void Afficher<T>::ajouter_element(T el) {
    elements.push_back(el);
}
template<typename T>
size_t Afficher<T>::afficher_liste() {
    for (size_t i = 1; auto const &msg: elements) {
        cout << i << ") : [" << msg->lis_date() << "] - " << msg->lis_source();
        ++i;
    }

    return this->elements->size();
}

//Exception Element hors bounds
//Dans toot et Email Excpetion si champs manquant : lis_*
//Dans toot et Email Excpetion si constructeur-> fichier invalide
//
template<typename T>
void Afficher<T>::afficher_element(size_t el) {
    T targetElement = elements.at(el);
    if(!targetElement.lis_sujet().empty())
        cout << "sujet: " << targetElement->lis_sujet() << endl;
    if(!targetElement.lis_date().empty())
        cout << "date: "<< targetElement->lis_date() << endl;
    if(!targetElement.lis_source().empty())
        cout << "source: " << targetElement->lis_source() << endl;
    if(!targetElement.lis_pour().empty())
        cout << "pour: " << targetElement->lis_pour() << endl;
    if(!targetElement.lis_corps().empty())
        cout << "corps: " << targetElement->lis_corps() << endl;
}