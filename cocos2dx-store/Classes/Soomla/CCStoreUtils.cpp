//
// Created by Fedor Shubin on 5/20/13.
//


#include "CCStoreUtils.h"
#include "cocos2d.h"

namespace soomla {
    void CCStoreUtils::logDebug(const char *tag, const char *message) {
        if (SOOMLA_DEBUG) {
            cocos2d::CCLog("%s %s", tag, message);
        }
    }
    void CCStoreUtils::logError(const char *tag, const char *message) {
        cocos2d::CCLog("%s %s", tag, message);
    }

};