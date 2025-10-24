#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include <vector>

class FileHandler {
public:
    FileHandler();
    bool createDirectory(const std::string& path);
    bool deleteFile(const std::string& path);
    bool deleteDirectory(const std::string& path);
    bool renameFile(const std::string& oldName, const std::string& newName);
    bool renameDirectory(const std::string& oldName, const std::string& newName);
    std::vector<std::string> listFiles(const std::string& path);
};

#endif // FILEHANDLER_H
