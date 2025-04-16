# Core Module
Provides fundamental mathematical operations:

## Functions
- `factorial(n)`: Calculates factorial of non-negative integers
- `power(base, exponent)`: Efficient exponentiation with O(log n) complexity

## Dependencies
- C++17 standard
- CMake 3.12+

## Usage
```cpp
#include "core/core.hpp"

int main() {
    std::cout << core::factorial(5); // 120
    std::cout << core::power(2, 8);  // 256
}
```