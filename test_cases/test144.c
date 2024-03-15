
#include <stdio.h>

#define PRINT_SUM(a, b) printf("The sum of %d and %d is %d.\n", a, b, a + b);

int main() {
    int num1 = 5;
    int num2 = 7;
    
    PRINT_SUM(num1, num2)

    return 0;
}
