
#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(0);  // Seed the random number generator for predictability.

    int num = rand();  // Generate a random integer.

    printf("Random number: %d\n", num);  // Print the random number to stdout.

    return 0;  // Return success.
}
