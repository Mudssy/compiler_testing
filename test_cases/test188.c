
#include <stdio.h>

// A constexpr function in C++ can be evaluated at compile-time, which can improve performance for certain computations.
constexpr int square(int x) {
    return x * x;
}

// A constexpr variable is a variable that can be evaluated at compile time.
constexpr int result = square(5);

int main() {
    // If constexpr variables and functions are supported, the output should be 25.
    printf("Result: %d\n", result);
    
    return 0;
}
