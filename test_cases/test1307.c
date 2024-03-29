
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator with current time
    int random_number = rand();
    
    printf("Random Number: %d\n", random_number);

    return 0;
}
