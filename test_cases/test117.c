
#include <stdio.h>

int factorial(int n) {
    static int result;
    
    if (n == 0)
        return result = 1;
    else 
        return result = n * factorial(n - 1);
}

int main() {
    printf("The factorial of 5 is: %d\n", factorial(5));
    printf("The factorial of 3 is: %d\n", factorial(3));
    
    return 0;
}
