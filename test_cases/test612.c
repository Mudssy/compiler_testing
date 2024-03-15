
#include <stdio.h>

int main() {
    // Declare complex numbers
    _Complex float c1 = 3 + 4 * _I;
    _Complex float c2 = 1 - 2 * _I;
    
    // Perform addition
    _Complex float c3 = c1 + c2;
    
    // Print result
    printf("The result of addition is: %.2f%+.2fi\n", crealf(c3), cimagf(c3));
    
    return 0;
}
