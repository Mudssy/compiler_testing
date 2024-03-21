
#include <stdio.h>

void recursive_function(int n) {
    if (n == 0) return; // Base case

    int a = 10; // A variable that will be colored in a certain register
    
    printf("Address of a: %p\n", &a); // Print the address of 'a' to observe whether it is colored in the same register each time

    recursive_function(n - 1); // Recursive call
}

int main() {
    recursive_function(5); // Call function with different values to cover more cases
    
    return 0;
}
