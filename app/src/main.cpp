#include "core/core.hpp"
#include "math/math.hpp"
#include <iostream>

int main() {
    std::cout << "Factorial of 5: " << core::factorial(5) << "\n";
    std::cout << "2^8: " << core::power(2, 8) << "\n";
    std::cout << "Sum 7+3: " << math::add(7, 3) << "\n";
    std::cout << "Product 7*3: " << math::multiply(7, 3) << "\n";
    return 0;
}