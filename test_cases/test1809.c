
#include <stdio.h>
#define SIZE 100000000 // A large number

void recursive_function(int i) {
    int array[SIZE]; // An array with a large size, causing stack overflow if too many recursions occur
    printf("%d\n", i);
    recursive_function(i + 1); // Recursion until Stack Overflow happens
}

int main() {
    recursive_function(1);
    return 0;
}
