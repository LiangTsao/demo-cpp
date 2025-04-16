#ifndef UTILS_UTILS_HPP
#define UTILS_UTILS_HPP

#include <string>

namespace utils {
    std::string trim(const std::string& str);
    void log(const std::string& message, int severity = 0);
}

#endif // UTILS_UTILS_HPP