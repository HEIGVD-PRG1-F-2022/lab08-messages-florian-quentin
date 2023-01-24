// ================================================================================
// File : config.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Quentin Aellen
// ================================================================================

#ifndef INC_08_MESSAGES_CONFIG_H
#define INC_08_MESSAGES_CONFIG_H

#include <string>

// Used in email and partially in toot
const std::string DATE_KEY_STR = "date";
const std::string FROM_KEY_STR = "from";
const std::string TO_KEY_STR = "to";
const std::string SUBJECT_KEY_STR = "subject";
const std::string BODY_KEY_STR = "body";

// Data folder path
const std::string EMAIL_DATA_FOLDER_PATH = "../data/emails/";
const std::string TOOT_DATA_FOLDER_PATH = "../data/Toots/";
const std::string TWEET_DATA_FOLDER_PATH = "../data/Tweets/";

// Custom display for exit
const std::string LEAVE_MSG = "Leave";

// Error messages
const std::string ERROR_MENU_ACTION_INPUT = "Sorry this action is not available, please retry";
const std::string ERROR_INDEX_OUT_OF_BOUND = "Index out of bound, Maximum ";

const std::string ERROR_UNDEFINED_KEYIDENTIFIER = "Undefined Key Identifier";
const std::string ERROR_INVALID_DATE_FORMAT = "Invalid Date Format";

//stream format
const std::string DATE_FORMAT = " %Y-%m-%d";

#endif//INC_08_MESSAGES_CONFIG_H
