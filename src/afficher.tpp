// ================================================================================
// File : Afficher.tpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/afficher.h"
#include "../include/menu.h"
#include <iostream>


template<typename T>
Afficher<T>::Afficher() {}

template<typename T>
void Afficher<T>::ajouter_element(T el) {
    elements.push_back(el);
}

template<typename T>
size_t Afficher<T>::afficher_liste() {

    for(size_t i = 0; auto &element: elements) {
        cout << ++i << DEFAULT_MENU_SEPARATOR << "["<< element.lis_date() << "] -" << element.lis_source() << endl;
    }

    return elements.size();
}

template<typename T>
void Afficher<T>::afficher_element(size_t index) {
    if(index > elements.size()){
        cout << "index trop grand, maximum: " << elements.size() <<endl;
        return;
    }
    T targetElement = elements.at(index);
    cout << "sujet: " << targetElement.lis_sujet() << endl;
    cout << "date: "<< targetElement.lis_date() << endl;
    cout << "source: " << targetElement.lis_source() << endl;
    cout << "pour: " << targetElement.lis_pour() << endl;
    cout << "corps: " << targetElement.lis_corps() << endl;
}