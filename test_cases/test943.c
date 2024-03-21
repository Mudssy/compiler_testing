
#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 10;
    
    // Test Less than (<), less than or equal to (<=)
    printf("CHECK: %d <  %d\n", x, y);   // This should print "true"
    printf("CHECK: %d <= %d\n", x, y);   // This should print "true"
    
    // Test Greater than (>), greater than or equal to (>=)
    printf("CHECK: %d >  %d\x20\n", x, y);  // This should print "false"
    printf("CHECK: %d >= %d\x20\n", x, y);   // This should print "false"
    
    // Test Equal to (==), not equal to (!=)
    printf("CHECK: %d == %d\x20\n", x, y);  // This should print "false"
    printf("CHECK: %d != %d\x20\n", x, y);   // This should print "true"
    
    return 0;
}
