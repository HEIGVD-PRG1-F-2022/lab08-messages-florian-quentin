// ================================================================================
// File : main.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/main.h"
#include "../include/afficher.h"
#include "../include/email.h"
#include "../include/toot.h"
#include "../include/tweet.h"

#include <filesystem>
#include <iostream>

void showMenu(const vector<string> &options, const string &sep) {
    for (size_t i = 0; const auto &option: options) {
        cout << ++i << sep << option << endl;
    }
    cout << 0 << sep << LEAVE_MSG << endl;
}

template<typename T>
void showMessagesMenu(const std::string &path) {
    Afficher<T> messages;

    // Read each file in the folder path and add their content to messages.
    for (const auto &entry: filesystem::directory_iterator(path)) {
        messages.ajouter_element(entry.path().string());
    }

    // Menu where you can choose which message to read.
    while (true) {
        string actionInput;

        messages.afficher_liste();
        cout << 0 << DEFAULT_MENU_SEPARATOR << LEAVE_MSG << endl;

        getline(cin, actionInput);

        try {
            int selectedIndex = stoi(actionInput);

            if (selectedIndex == 0) return;// Exit the menu

            if (selectedIndex < 0) throw invalid_argument(ERROR_MENU_ACTION_INPUT);// Check for negative numbers

            messages.afficher_element((size_t) selectedIndex - 1);
            return;
        } catch (const exception &e) {
            cerr << e.what() << endl;
        }
    }
}

void mainMenu() {
    while (true) {
        string actionInput;
        showMenu(MAIN_MENU_OPTIONS);

        getline(cin, actionInput);

        try {
            switch (stoi(actionInput)) {
                case 0: {
                    return;// Exit the menu
                }
                case 1: {
                    showMessagesMenu<Toot>(TOOT_DATA_FOLDER_PATH);
                    break;
                }
                case 2: {
                    showMessagesMenu<Email>(EMAIL_DATA_FOLDER_PATH);
                    break;
                }
                case 3: {
                    showMessagesMenu<Tweet>(TWEET_DATA_FOLDER_PATH);
                    break;
                }
                default:
                    throw invalid_argument(ERROR_MENU_ACTION_INPUT);
            }
        } catch (exception const &e) {
            cerr << e.what() << endl;
        }
    }
}

int main() {
    mainMenu();
    return EXIT_SUCCESS;
}
