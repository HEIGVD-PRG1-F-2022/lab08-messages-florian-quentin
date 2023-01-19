// ================================================================================
// File : Email.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#include "../include/Email.h"
using namespace std;

const std::string DATE_KEY_STR = "date";
const std::string FROM_KEY_STR = "from";
const std::string TO_KEY_STR = "to";
const std::string SUBJECT_KEY_STR = "subject";
const std::string BODY_KEY_STR = "body";

Email::Email(const std::string &file) {
    std::vector<std::string> lines;

    std::string line;
    std::ifstream infile(file);

    bool isBody = false;
    std::string store;

    while (getline(infile, line)) {
        vector<string> separation(2);
        std::size_t commaIndex = line.find(':');
        string premierSegment = line.substr(0, commaIndex - 1);
        string deuxiemeSegment = line.substr(commaIndex + 1);

        separation.at(0) = premierSegment;
        separation.at(1) = deuxiemeSegment;


        if (isBody) {
            store.append(line);
        } else {
            store.clear();
        }

        if (premierSegment == DATE_KEY_STR) {

        } else if (premierSegment == FROM_KEY_STR) {

        } else if (premierSegment == TO_KEY_STR) {

        } else if (premierSegment == SUBJECT_KEY_STR) {

        } else if (premierSegment == BODY_KEY_STR) {
            isBody = true;
            continue;
        }
    }
}
