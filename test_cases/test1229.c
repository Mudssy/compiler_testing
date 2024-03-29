
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int) time(NULL)); // Seed the random number generator with current time
    
    for (int i = 0; i < 5; ++i){ 
        printf("%d\n", rand()); // Print out a random number every loop iteration
    }
    
    return 0;
}
