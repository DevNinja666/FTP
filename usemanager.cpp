#include "UserManager.h"
#include <iostream>

UserManager::UserManager() {}

bool UserManager::registerUser(const std::string& username, const std::string& password) {
    for (auto &u : users) {
        if (u.username == username) return false; // пользователь уже есть
    }
    users.push_back({username, password});
    std::cout << "User registered: " << username << std::endl;
    return true;
}

bool UserManager::loginUser(const std::string& username, const std::string& password) {
    for (auto &u : users) {
        if (u.username == username && u.password == password)
            return true;
    }
    return false;
}
