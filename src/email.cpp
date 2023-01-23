// ================================================================================
// File : email.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/email.h"
#include "../include/util.h"

#include <fstream>
#include <iostream>

using namespace std;

Email::Email(const string &filePath) {
    vector<string> lines;
    string line;
    ifstream infile(filePath);

    string keyIdentifier, keyContent;

    bool isBodyFlag = false;

    while (getline(infile, line)) {
        vector<string> parts = split(line, ':', 2);

        // Check if is body content
        if (parts.size() == 2 && !isBodyFlag) {
            keyIdentifier = parts.at(0);
            keyContent = parts.at(1);
        } else {
            keyContent = parts.at(0);
        }

        // Store content into class according his keyIdentifier
        switch (resolveKeyIdentifier(keyIdentifier)) {
            case KeyIdentifier::Date:
                date = checkDateTime(keyContent);
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
                isBodyFlag = true;
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

    throw invalid_argument(ERROR_UNDEFINED_KEYIDENTIFIER);
}

string Email::lis_sujet() {
    return subject;
}
string Email::lis_date() {
    return date;
}
string Email::lis_source() {
    return from;
}
string Email::lis_pour() {
    return to;
}
string Email::lis_corps() {
    return body;
}
