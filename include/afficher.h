// ================================================================================
// File : afficher.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#ifndef INC_08_MESSAGES_AFFICHER_H
#define INC_08_MESSAGES_AFFICHER_H

#include <string>
#include <vector>

/**
 * Generic container for T type messages
 * @tparam T
 */
template<typename T>
class Afficher {
private:
    std::vector<T> elements;

public:
    /**
     * Add a single element
     * @param el T elements
     */
    void ajouter_element(T el);

    /**
     * Display all elements with indexes, date and source
     * @return size_t number of elements
     */
    size_t afficher_liste();

    /**
     * Display selected element information
     * @param el size_t index of element
     */
    void afficher_element(size_t el);
};

#include "../src/afficher.tpp"
#endif//INC_08_MESSAGES_AFFICHER_H
