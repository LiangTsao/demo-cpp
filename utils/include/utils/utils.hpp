#pragma once

#include <string>

namespace utils {
    std::string trim(const std::string& str);
    void log(const std::string& message, int severity = 0);
}