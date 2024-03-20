
#include <stdio.h>

int fib(int n) {
    if (n <= 1) 
        return n; 
    else 
        return fib(n - 1) + fib(n - 2); 
} 
  
int main() { 
    int n = 9; // Fibonacci number to calculate. Adjust as needed for your tests.
    printf("%d", fib(n)); 
    return 0; 
} 
