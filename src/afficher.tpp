// ================================================================================
// File : Afficher.tpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/afficher.h"
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
    if(el > elements.size()){
        cout << "index trop grand, maximum: " << elements.size() <<endl;
        return;
    }
    T targetElement = elements.at(el);
    cout << "sujet: " << targetElement->lis_sujet() << endl;
    cout << "date: "<< targetElement->lis_date() << endl;
    cout << "source: " << targetElement->lis_source() << endl;
    cout << "pour: " << targetElement->lis_pour() << endl;
    cout << "corps: " << targetElement->lis_corps() << endl;
}