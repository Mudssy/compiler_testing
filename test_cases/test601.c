
#include <stdio.h>

long long int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    
    // If the number is negative, return -1 as an error code
    else if (n < 0) return -1;
    
    // Recursive case: multiply n by factorial of (n-1)
    else return n * factorial(n - 1);
}

int main() {
    int number = 5;  // Input for the function
    long long int result = factorial(number);
    
    if (result == -1) printf("Error: Factorial of a negative number is undefined.\n");
    else printf("Factorial of %d = %lld\n", number, result);
    
    return 0;
}
