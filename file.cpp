#include "FileHandler.h"
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

FileHandler::FileHandler() {}

bool FileHandler::createDirectory(const std::string& path) {
    try {
        return fs::create_directories(path);
    } catch (...) {
        return false;
    }
}

bool FileHandler::deleteFile(const std::string& path) {
    try {
        return fs::remove(path);
    } catch (...) {
        return false;
    }
}

bool FileHandler::deleteDirectory(const std::string& path) {
    try {
        return fs::remove_all(path) > 0;
    } catch (...) {
        return false;
    }
}

bool FileHandler::renameFile(const std::string& oldName, const std::string& newName) {
    try {
        fs::rename(oldName, newName);
        return true;
    } catch (...) {
        return false;
    }
}

bool FileHandler::renameDirectory(const std::string& oldName, const std::string& newName) {
    try {
        fs::rename(oldName, newName);
        return true;
    } catch (...) {
        return false;
    }
}

std::vector<std::string> FileHandler::listFiles(const std::string& path) {
    std::vector<std::string> files;
    try {
        for (auto &p : fs::directory_iterator(path)) {
            files.push_back(p.path().filename().string());
        }
    } catch (...) {}
    return files;
}
