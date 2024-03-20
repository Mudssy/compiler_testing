
#include <stdio.h>

// Testing constexpr variables and functions
constexpr int square(int x) { return x * x; }

int main() {
    // Testing if a variable is constexpr
    static_assert(square(5) == 25, "Square function should have been calculated at compile time");
    
    printf("%d\n", square(5));  // Expected output: 25
  
    return 0;
}
