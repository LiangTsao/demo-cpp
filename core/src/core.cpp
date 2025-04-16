#include "core/core.hpp"

namespace core {
    int factorial(int n) {
        if(n <= 1) return 1;
        int result = 1;
        for(int i = 2; i <= n; i++) {
            result = math::multiply(result, i);
        }
        return result;
    }
    
    int power(int base, int exponent) {
        if(exponent == 0) return 1;
        int result = base;
        for(int i = 1; i < exponent; i++) {
            result = math::multiply(result, base);
        }
        return result;
    }
}