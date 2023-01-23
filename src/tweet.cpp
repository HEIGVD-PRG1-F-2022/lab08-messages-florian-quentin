// ================================================================================
// File : tweet.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Quentin Aellen
// ================================================================================

#include "../include/util.h"
#include "../include/tweet.h"

#include <fstream>

using namespace std;

Tweet::Tweet(const std::string &filePath) {
    vector<std::string> lines;

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
                date = keyContent;
                break;
            case KeyIdentifier::From:
                from = keyContent;
                break;
            case KeyIdentifier::Body:
                body += keyContent + (!keyContent.empty() ? "\n" : "");
                isBodyFlag = true;
                break;
        }
    }
}

Tweet::KeyIdentifier Tweet::resolveKeyIdentifier(const std::string &key) {
    if (key == DATE_KEY_STR) return KeyIdentifier::Date;
    if (key == FROM_KEY_STR) return KeyIdentifier::From;
    if (key == BODY_KEY_STR) return KeyIdentifier::Body;

    throw invalid_argument("Undefined keyIdentifier");
}


string Tweet::lis_sujet() {
    return subject;
}
string Tweet::lis_date() {
    return date;
}
string Tweet::lis_source() {
    return from;
}
string Tweet::lis_pour() {
    return to;
}
string Tweet::lis_corps() {
    return body;
}
