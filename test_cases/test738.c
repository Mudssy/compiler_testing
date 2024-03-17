
#include <stdio.h>

// Function prototype with stdcall attribute
int __attribute__((stdcall)) add(int x, int y);

// Main function
int main() {
    int result = add(5, 3);
    printf("The sum is: %d\n", result);
    return 0;
}

// Function implementation with stdcall attribute
int __attribute__((stdcall)) add(int x, int y) {
    return x + y;
}
