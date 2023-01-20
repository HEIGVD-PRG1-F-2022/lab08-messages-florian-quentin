// ================================================================================
// File : Email.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/email.h"
#include "../include/util.h"
using namespace std;

Email::Email(const std::string &file) {
    std::vector<std::string> lines;

    std::string line;
    std::ifstream infile(file);

    string keyIdentifier, keyContent;

    while (getline(infile, line)) {
        vector<string> parts = split(line, ':', 2);

        if (parts.size() == 2) {
            keyIdentifier = parts.at(0);
            keyContent = parts.at(1);
        } else {
            keyContent = parts.at(0);
        }

        switch (resolveKeyIdentifier(keyIdentifier)) {
            case KeyIdentifier::Date:
                date = keyContent;
                break;
            case KeyIdentifier::From:
                from = keyContent;
                break;
            case KeyIdentifier::To:
                to = keyContent;
                break;
            case KeyIdentifier::Subject:
                subject = keyContent;
                break;
            case KeyIdentifier::Body:
                body += keyContent + (!keyContent.empty() ? "\n" : "");
                break;
        }
    }
}
Email::KeyIdentifier Email::resolveKeyIdentifier(const string &key) {
    if (key == DATE_KEY_STR) return KeyIdentifier::Date;
    if (key == FROM_KEY_STR) return KeyIdentifier::From;
    if (key == TO_KEY_STR) return KeyIdentifier::To;
    if (key == SUBJECT_KEY_STR) return KeyIdentifier::Subject;
    if (key == BODY_KEY_STR) return KeyIdentifier::Body;

    throw invalid_argument("Undefined keyIdentifier");
}

std::string Email::lis_sujet() {
    return subject;
}
std::string Email::lis_date() {
    return date;
}
std::string Email::lis_source() {
    return from;
}
std::string Email::lis_pour() {
    return to;
}
std::string Email::lis_corps() {
    return body;
}
