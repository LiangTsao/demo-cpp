#include "utils/utils.hpp"
#include <algorithm> 
#include <iostream>

namespace utils {
    std::string trim(const std::string& str) {
        size_t first = str.find_first_not_of(" \t\n\r");
        if(first == std::string::npos) return "";
        
        size_t last = str.find_last_not_of(" \t\n\r");
        return str.substr(first, (last - first + 1));
    }

    void log(const std::string& message, int severity) {
        std::string prefix;
        switch(severity) {
            case 1: prefix = "[WARNING] "; break;
            case 2: prefix = "[ERROR] "; break;
            default: prefix = "[INFO] ";
        }
        std::cout << prefix << message << std::endl;
    }
}