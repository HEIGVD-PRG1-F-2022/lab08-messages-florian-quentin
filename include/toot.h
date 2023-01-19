// ================================================================================
// File : Toot.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// File created by Florian Duruz
// ================================================================================

#ifndef INC_08_MESSAGES_TOOT_H
#define INC_08_MESSAGES_TOOT_H

#include <string>

class Toot
{
private:
    std::string sujet;
    std::string date;
    std::string source;
    std::string pour;
    std::string corps;
public:
    Toot();
    std::string lis_sujet();
    std::string lis_date();
    std::string lis_source();
    std::string lis_pour();
    std::string lis_corps();
};


#endif//INC_08_MESSAGES_TOOT_H
