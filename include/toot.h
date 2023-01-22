// ================================================================================
// File : Toot.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// File created by Florian Duruz
// ================================================================================

#ifndef INC_08_MESSAGES_TOOT_H
#define INC_08_MESSAGES_TOOT_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Toot
{
private:
    const std::string DATE_KEY_STR = "date";
    const std::string FROM_KEY_STR = "from";
    const std::string BODY_KEY_STR = "body";

    std::string subject,date,from,to,body;
    enum class KeyIdentifier {
        Date = 0,
        From,
        Body
    };
    KeyIdentifier resolveKeyIdentifier(const std::string &key);
public:
    Toot();
    Toot(const std::string &file);
    std::string lis_sujet();
    std::string lis_date();
    std::string lis_source();
    std::string lis_pour();
    std::string lis_corps();
};


#endif//INC_08_MESSAGES_TOOT_H
