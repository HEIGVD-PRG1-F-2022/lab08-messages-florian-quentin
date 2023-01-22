// ================================================================================
// File : main.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/afficher.h"
#include "../include/email.h"
#include "../include/toot.h"
#include <iostream>
#include <filesystem>

const string EMAIL_DATA_FOLDER_PATH = "../data/emails/";
const string TOOT_DATA_FOLDER_PATH = "../data/Toots/";

const vector<string> MAIN_MENU_OPTIONS = {
        "Show Toots",
        "Show Emails",
};

const string LEAVE_MSG = "Leave";
const string ERROR_MENU_ACTION_INPUT = "Sorry this action is not available, please retry";

void showMenu(const vector<string> &options, const string sep = DEFAULT_MENU_SEPARATOR) {
    for (size_t i = 0; const auto &option: options) {
        cout << ++i << sep << option << endl;
    }
    cout << 0 << sep << LEAVE_MSG << endl;
}

template<typename T>
void showMessagesMenu(const std::string& path)
{
    Afficher<T> messages;
    for (const auto & entry : std::filesystem::directory_iterator(path)){
        messages.ajouter_element(entry.path().string());
    }

    while (true) {
        string actionInput;
        messages.afficher_liste();
        cout << 0 << DEFAULT_MENU_SEPARATOR << LEAVE_MSG << endl;
        getline(cin, actionInput);

        try {
            int selectedIndex = stoi(actionInput);
            switch (selectedIndex) {
                case 0: {
                    return;// Exit the menu
                }
                default: {
                    if(selectedIndex < 0) throw invalid_argument(ERROR_MENU_ACTION_INPUT);
                    messages.afficher_element((size_t)selectedIndex-1);
                }
            }
        }catch (exception const &e) {
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
                    // TODO: Show Toots
                    showMessagesMenu<Toot>(TOOT_DATA_FOLDER_PATH);
                    break;
                }
                case 2: {
                    // TODO: Show Emails
                    showMessagesMenu<Email>(EMAIL_DATA_FOLDER_PATH);
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

    return 0;
}
