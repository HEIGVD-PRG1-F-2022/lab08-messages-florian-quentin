// ================================================================================
// File : Email.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz, Antoine Leresche
// File created by Florian Duruz, Antoine Leresche
// ================================================================================

//
// Created by Florian Duruz, Antoine Leresche on 17/01/2023.
//

#include "Email.h"
using namespace std;

Email::Email(const std::string &file) {
    std::vector<std::string> lines;

    std::string line;
    std::ifstream infile(file);

    while(getline(infile, line)) {
        vector<string> separation(2);
        std::size_t commaIndex = line.find(':');
        string premierSegment =  line.substr(0, commaIndex-1);
        string deuxiemeSegment =  line.substr(commaIndex+1);

        separation.at(0) = premierSegment;
        separation.at(1) = deuxiemeSegment;

        if(premierSegment == "date")
        {

        }
        else if(premierSegment == "from")
        {

        }
        else if(premierSegment == "to")
        {

        }
        else if(premierSegment == "subject")
        {

        }
        else if(premierSegment == "body")
        {

        }
    }
}
