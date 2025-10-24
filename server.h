#ifndef SERVER_H
#define SERVER_H

#include <string>
#include <vector>
#include <thread>
#include "UserManager.h"
#include "FileHandler.h"

class Server {
private:
    int port;
    UserManager userManager;
    FileHandler fileHandler;
    bool running;

    void handleClient(int clientSocket);

public:
    Server(int port = 2121);
    void start();
    void stop();
};

#endif // SERVER_H
