#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <vector>

class Client {
private:
    std::string serverIP;
    int serverPort;
    bool connected;

public:
    Client(const std::string& ip = "127.0.0.1", int port = 2121);
    bool connectToServer();
    void disconnect();
    bool login(const std::string& username, const std::string& password);
    bool registerUser(const std::string& username, const std::string& password);
    std::vector<std::string> listFiles(const std::string& path);
    bool uploadFile(const std::string& localPath, const std::string& remotePath, int threads = 1);
    bool downloadFile(const std::string& remotePath, const std::string& localPath, int threads = 1);
};

#endif // CLIENT_H
