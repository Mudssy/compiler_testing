
#include <stdio.h>

int add(int a, int b); // function declaration

int main() {
    printf("%d\n", add(3, 4)); // should print out 7
    return 0;
}

int add(int a, int b) { // function definition
    return a + b;
}
