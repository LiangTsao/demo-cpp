# Math Module
Provides basic arithmetic operations:

## Functions
- `add(a, b)`: Performs integer addition
- `multiply(a, b)`: Performs integer multiplication

## Dependencies
- C++17 standard
- CMake 3.12+

## Usage
```cpp
#include "math/math.hpp"

int main() {
    std::cout << math::add(7, 3);      // 10
    std::cout << math::multiply(7, 3); // 21
}
```