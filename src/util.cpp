// ================================================================================
// File : Util.cpp
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Quentin Aellen
// ================================================================================

#include "../include/util.h"

using namespace std;


/**
 * Source : https://github.com/HEIGVD-PRG1-F-2022/librobots/blob/5d2ea94352308cf7372f215e74eb9eed3aaeb215/src/Message.cpp
 */
vector<string> split(const string &str, const char &sep, const size_t max_sep) {
    vector<string> parts;
    size_t lastIndexCursor = 0;
    size_t nextIndexCursor = 0;

    while ((nextIndexCursor = str.find(sep, lastIndexCursor)) != string::npos &&
           (parts.size() + 1 < max_sep || max_sep == 0)) {
        parts.push_back(str.substr(lastIndexCursor, nextIndexCursor - lastIndexCursor));
        lastIndexCursor = nextIndexCursor + 1;
    }

    parts.push_back(str.substr(lastIndexCursor));
    return parts;
}
