// ================================================================================
// File : afficher.tpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/afficher.h"
#include "../include/config.h"
#include "../include/menu.h"

#include <iostream>

using namespace std;

template<typename T>
void Afficher<T>::ajouter_element(T el) {
    elements.push_back(el);
}

template<typename T>
size_t Afficher<T>::afficher_liste() {

    for (size_t i = 0; auto &el: elements) {
        cout << ++i << DEFAULT_MENU_SEPARATOR << "[" << el.lis_date() << "] -" << el.lis_source() << endl;
    }

    return elements.size();
}

template<typename T>
void Afficher<T>::afficher_element(size_t el) {
    // Receive index, compare with elements.size() - 1 (maximum index available)
    if (el > elements.size() - 1) {
        cerr << ERROR_INDEX_OUT_OF_BOUND << elements.size() << endl;
        return;
    }

    T targetElement = elements.at(el);

    cout << SUBJECT_KEY_STR << ":" << targetElement.lis_sujet() << endl;
    cout << DATE_KEY_STR << ":" << targetElement.lis_date() << endl;
    cout << FROM_KEY_STR << ":" << targetElement.lis_source() << endl;
    cout << TO_KEY_STR << ":" << targetElement.lis_pour() << endl;
    cout << BODY_KEY_STR << ":" << targetElement.lis_corps() << endl;
}