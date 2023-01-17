//
// Fichier principal pour le labo 08 - Messages
//

#include <iostream>
#include "Afficher.h"
#include "emails/Email.h"
#include "Toots/Toot.h"

int main() {
    Afficher<Email> emails;
    Email a("emails/email1.txt");
    emails.ajouter_element(a);
    return 0;
}
