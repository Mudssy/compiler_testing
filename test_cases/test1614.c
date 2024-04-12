
#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * factorial(n - 1);
}

int main() {
    printf("Factorial of 5: %lld\n", factorial(5));
    return 0;
}
