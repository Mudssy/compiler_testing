
#include <stdio.h>

int main() {
    // Testing integer literal value conversion and formatting
    printf("%d\n", 123);        // Should print "123"
    printf("%#x\n", 0xff);      // Should print "0xff"
    
    // Testing float/double literal value conversion and formatting
    printf("%f\n", .1 + .2);    // Should print "0.300000"
    
    // Testing character literal value conversion and formatting
    printf("%c\n", 'A');        // Should print "A"
    
    // Testing string literal value conversion and formatting
    printf("%s\n", "Hello, World!");  // Should print "Hello, World!"
    
    return 0;
}
