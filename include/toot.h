// ================================================================================
// File : toot.h
// Project name : LABO - 08-Messages
// Project members :
// - Florian Duruz
// - Quentin Aellen
// File created by Florian Duruz
// ================================================================================

#ifndef INC_08_MESSAGES_TOOT_H
#define INC_08_MESSAGES_TOOT_H

#include "config.h"

#include <string>

class Toot {
private:
    std::string subject, date, from, to, body;

    /**
     * Enumeration of KeyIdentifier available **only** in Toot
     * This is here because class need a specialized resolver.
     * We can't generalize it because of the potential change into the storage structure.
     */
    enum class KeyIdentifier {
        Date = 0,
        From,
        Body
    };

    /**
     * Convert string to a specific enum of KeyIdentifier
     * @param key string keyString to convert to an enum
     * @return KeyIdentifier matching keyString
     */
    KeyIdentifier resolveKeyIdentifier(const std::string &key);

public:
    /**
     * Read filePath and import data into the class
     * @param filePath string
     */
    Toot(const std::string &filePath);

    std::string lis_sujet();
    std::string lis_date();
    std::string lis_source();
    std::string lis_pour();
    std::string lis_corps();
};


#endif//INC_08_MESSAGES_TOOT_H
