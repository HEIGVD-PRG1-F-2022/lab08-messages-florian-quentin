// ================================================================================
// File : Email.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#ifndef INC_08_MESSAGES_EMAIL_H
#define INC_08_MESSAGES_EMAIL_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>



class Email {
private:
    const std::string DATE_KEY_STR = "date";
    const std::string FROM_KEY_STR = "from";
    const std::string TO_KEY_STR = "to";
    const std::string SUBJECT_KEY_STR = "subject";
    const std::string BODY_KEY_STR = "body";

    std::string date, from, to, subject, body;

    enum class KeyIdentifier {
        Date = 0,
        From,
        To,
        Subject,
        Body
    };

    KeyIdentifier resolveKeyIdentifier(const std::string &key);

public:
    Email(const std::string &file);
    std::string lis_sujet();
    std::string lis_date();
    std::string lis_source();
    std::string lis_pour();
    std::string lis_corps();

};


#endif//INC_08_MESSAGES_EMAIL_H
