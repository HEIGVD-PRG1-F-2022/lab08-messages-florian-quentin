// ================================================================================
// File : Email.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// File created by Florian Duruz
// ================================================================================

//
// Created by Florian Duruz on 17/01/2023.
//

#ifndef INC_08_MESSAGES_EMAIL_H
#define INC_08_MESSAGES_EMAIL_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
class Email
{
private:
    std::string sujet;
    std::string date;
    std::string source;
    std::string pour;
    std::string corps;
public:
    Email(const std::string &file);
    std::string lis_sujet();
    std::string lis_date();
    std::string lis_source();
    std::string lis_pour();
    std::string lis_corps();
};


#endif//INC_08_MESSAGES_EMAIL_H
