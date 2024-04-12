
#include <stdio.h>

int main() {
    int i = 0;
    while(1) {  // An infinite loop - it will keep running until the machine runs out of memory or power
        printf("Iteration %d\n", i++);
    }
    
    return 0;  // This line will never be reached, because the program will run forever.
}
