
#include <stdio.h>

int main() {
    volatile int i = 10;
    
    // This will print "i changed to 20"
    printf("Initial value of i: %d\n", i);
    
    // Now let's change the value of i
    *(volatile int*)&i = 20;

    printf("i changed to %d\n", i);
    
    return 0;
}
