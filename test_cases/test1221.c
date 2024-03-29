
#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(time(NULL)); // Seed the random number generator with current time
    
    for (int i = 0; i < 5; i++) {  // Generate 5 pseudo-random numbers
        printf("%d\n", rand() % 100); // Print a random number between 0 and 99
    }

    return 0;
}
