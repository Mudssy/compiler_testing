
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    
    // Conditional expression feature test
    int max = (x > y) ? x : y;
    printf("The maximum value is: %d\n", max);

    // Operator rewriting feature test
    int a = 5;
    int b = 3;
    a += b;  // This will be rewritten to a = a + b by the compiler
    printf("a after operator rewrite: %d\n", a);

    return 0;
}
