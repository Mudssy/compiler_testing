
#include <stdio.h>

int add(int a, int b); // Function Prototype

int main() {
    int sum = add(5, 3); // Function Call
    printf("The sum of 5 and 3 is: %d\n", sum);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
