
#include <stdio.h>

// Function to check if a number is odd or even
int is_even(int n) {
    return !(n & 1);
}

// Main function
int main() {
    int num = 7;
    
    // Check if the number is even and print result
    if (is_even(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
