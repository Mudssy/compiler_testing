
#include <stdio.h>

int main() {
    int i;
    for(i = 0; i < 5; i++) {
        printf("Loop iteration %d\n", i);
    }
    
    i = 0;
    while(i < 5) {
        printf("While loop iteration %d\n", i);
        i++;
    }
    
    i = 0;
    do {
        printf("Do-while loop iteration %d\n", i);
        i++;
    } while(i < 5);
    
    return 0;
}
