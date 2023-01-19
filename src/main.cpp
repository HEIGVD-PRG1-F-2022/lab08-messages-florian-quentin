// ================================================================================
// File : main.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/Afficher.h"
#include "../include/Email.h"
#include "../include/Toot.h"
#include <iostream>

const vector<string> MAIN_MENU_OPTIONS = {
        "Show Toots",
        "Show Emails",
};

const string LEAVE_MSG = "Leave";
const string ERROR_MENU_ACTION_INPUT = "Sorry this action is not available, please retry";

void showMenu(const vector<string> &options, const string sep = "> ") {
    for (size_t i = 0; const auto &option: options) {
        cout << ++i << sep << option << endl;
    }
    cout << 0 << sep << LEAVE_MSG << endl;
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
                    break;
                }
                case 2: {
                    // TODO: Show Emails
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
    Afficher<Email> emails;
    Email a("emails/email1.txt");
    emails.ajouter_element(a);

    mainMenu();

    return 0;
}
