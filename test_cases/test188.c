
#include <stdio.h>

long long factorial(int n) {  // Use long long to accommodate larger numbers
    if (n == 0) {
        return 1;
     } else {
        return n * factorial(n - 1);
     }
}

int main() {
    #define a factorial(5)  // Define 'a' as the result of the factorial function

    printf("Factorial of 5 is %lld\n", (long long)a);  // Use '%lld' to print long long ints and cast 'a' to long long

    return 0;
}
