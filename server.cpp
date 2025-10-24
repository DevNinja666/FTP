#include "Server.h"
#include <iostream>
#include <thread>

Server::Server(int port) : port(port), running(false) {}

void Server::start() {
    running = true;
    std::cout << "Server started on port " << port << std::endl;

    // Заглушка для клиента: имитация подключения
    while (running) {
        std::cout << "Waiting for clients..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << "Client connected (simulation)" << std::endl;
    }
}

void Server::stop() {
    running = false;
    std::cout << "Server stopped" << std::endl;
}

void Server::handleClient(int clientSocket) {
    // TODO: обработка команд клиента
}
