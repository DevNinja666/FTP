#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <string>
#include <vector>

struct User {
    std::string username;
    std::string password;
};

class UserManager {
private:
    std::vector<User> users;
public:
    UserManager();
    bool registerUser(const std::string& username, const std::string& password);
    bool loginUser(const std::string& username, const std::string& password);
};

#endif // USERMANAGER_H
