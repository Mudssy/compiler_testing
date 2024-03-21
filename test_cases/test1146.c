
#include <stdio.h>

int main(void) {
    int x = 10;
    
    printf("Initial value is %d\n", x);
    
    // Using GNU Extension: Designated initializer
    int y = (int){x} + 20;

    printf("After adding 20 using designated initializer, the value is %d\n", y);

    return 0; // The program always returns to prevent an infinite loop
}
