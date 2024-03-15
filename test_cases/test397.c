
#include <stdio.h>

int main() {
    int a = 10;
    if (a > 5) {
        int b = 20;
        printf("Value of b: %d\n", b);
    }
    // The following line would result in an error if variable b is not block-scoped.
    // If it's block-scoped, the program will successfully run and print "Error: use of undeclared identifier 'b'"
    printf("Value of b after block scope: %d\n", b);
    return 0;
}
