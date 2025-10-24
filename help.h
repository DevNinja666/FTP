#ifndef HELPERS_H
#define HELPERS_H

#include <string>
#include <iostream>

namespace Helpers {
    inline void log(const std::string& message) {
        std::cout << "[LOG] " << message << std::endl;
    }

    inline bool validateUsername(const std::string& username) {
        return !username.empty() && username.size() >= 3;
    }

    inline bool validatePassword(const std::string& password) {
        return !password.empty() && password.size() >= 5;
    }
}

#endif // HELPERS_H
