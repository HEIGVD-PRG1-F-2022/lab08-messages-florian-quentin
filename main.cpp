//
// Fichier principal pour le labo 08 - Messages
//

#include "Afficher.h"
#include "Toots/Toot.h"
#include "emails/Email.h"
#include <iostream>

const vector<string> MAIN_MENU_OPTIONS = {
        "Show Toots",
        "Show Emails",
};

const string LEAVE_MSG = "Leave";
const string ERROR_MENU_ACTION_INPUT = "Sorry this action is not manage, please retry";

void showMenu(const vector<string> &options, const string sep = "> ") {
    for (size_t i = 0; const auto &option: options) {
        cout << ++i << sep << option << endl;
    }
    cout << 0 << sep << LEAVE_MSG << endl;
}

void mainMenu() {
    while (true) {
        char actionInput = '\0';
        showMenu(MAIN_MENU_OPTIONS);
        cin >> actionInput;

        switch (actionInput) {
            case '0': {
                return;
            }
            case '1': {
                // TODO: Show Toots
                break;
            }
            case '2': {
                // TODO: Show Emails
                break;
            }
            default:
            cerr << ERROR_MENU_ACTION_INPUT << endl;
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
