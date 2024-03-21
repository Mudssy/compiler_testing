
#include <stdio.h>

int main() {
    int (*add)(int, int) = (void*)&add; // Define a pointer to a function
    add = [](int a, int b) -> int { return a + b; }; // Assign the lambda to this pointer
    
    printf("The result of 5 + 3 is %d\n", add(5, 3)); // Use the lambda via the pointer
    return 0;
}
