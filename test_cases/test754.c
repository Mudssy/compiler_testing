
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

__attribute__((cold)) void print_hot(void) { printf("Hot\n"); }

int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    int i;
    
    for(i=0; i<100; i++){
        if ( rand() % 100 < 90 ){
            printf("Hot\n");
        } else {
            print_hot();
        }
    }
    
    return 0;
}
