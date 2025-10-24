#include "Client.h"
#include <iostream>
#include <thread>
#include <chrono>

Client::Client(const std::string& ip, int port) : serverIP(ip), serverPort(port), connected(false) {}

bool Client::connectToServer() {
    // Заглушка подключения
    connected = true;
    std::cout << "Connected to server " << serverIP << ":" << serverPort << std::endl;
    return connected;
}

void Client::disconnect() {
    connected = false;
    std::cout << "Disconnected from server" << std::endl;
}

bool Client::login(const std::string& username, const std::string& password) {
    if (!connected) return false;
    std::cout << "Logging in as " << username << std::endl;
    return true; // Заглушка, всегда true
}

bool Client::registerUser(const std::string& username, const std::string& password) {
    if (!connected) return false;
    std::cout << "Registering user " << username << std::endl;
    return true;
}

std::vector<std::string> Client::listFiles(const std::string& path) {
    return {"file1.txt", "file2.txt"}; // Заглушка списка файлов
}

bool Client::uploadFile(const std::string& localPath, const std::string& remotePath, int threads) {
    std::cout << "Uploading " << localPath << " to " << remotePath << " using " << threads << " threads" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return true;
}

bool Client::downloadFile(const std::string& remotePath, const std::string& localPath, int threads) {
    std::cout << "Downloading " << remotePath << " to " << localPath << " using " << threads << " threads" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return true;
}
