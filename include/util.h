// ================================================================================
// File : Util.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Quentin Aellen
// ================================================================================

#ifndef INC_08_MESSAGES_UTIL_H
#define INC_08_MESSAGES_UTIL_H

#include <vector>
#include <string>

/**
 * Split one string to multiple parts with a specified separator and can limit the number of parts.
 * @param str string original string to split in multiple parts
 * @param sep char To know where split parts into the string
 * @param max_sep size_t maximum number of parts wanted, by default 0 = no limit
 * @return
 */
std::vector<std::string> split(const std::string &str, const char &sep = ':', const size_t max_sep = 0);

#endif//INC_08_MESSAGES_UTIL_H
