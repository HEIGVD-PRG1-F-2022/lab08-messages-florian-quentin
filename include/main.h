// ================================================================================
// File : main.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Quentin Aellen
// ================================================================================

#ifndef INC_08_MESSAGES_MAIN_H
#define INC_08_MESSAGES_MAIN_H

#include "./menu.h"

#include <string>
#include <vector>

const std::string EMAIL_DATA_FOLDER_PATH = "../data/emails/";
const std::string TOOT_DATA_FOLDER_PATH = "../data/Toots/";

const std::string LEAVE_MSG = "Leave";
const std::string ERROR_MENU_ACTION_INPUT = "Sorry this action is not available, please retry";

const std::vector<std::string> MAIN_MENU_OPTIONS = {
        "Show Toots",
        "Show Emails",
};

/**
 * Show and manage user input validation for main menu navigation
 */
void mainMenu();

/**
 * Display all options available to the user starting at number 1.
 * 0 is the option to leave or exit the app
 * @param options vector<string> options to display to user
 * @param sep string separator between number and content
 */
void showMenu(const std::vector<std::string> &options, const std::string &sep = DEFAULT_MENU_SEPARATOR);

/**
 * Display all messages of type T to user with index number starting at number 1
 * 0 is the option to leave or exit the app
 * @tparam T Email, Toot type of message to display
 * @param path string Path of the folder with all the messages files
 */
template<typename T>
void showMessagesMenu(const std::string &path);

#endif//INC_08_MESSAGES_MAIN_H
