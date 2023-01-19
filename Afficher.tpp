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

#include "Afficher.h"
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