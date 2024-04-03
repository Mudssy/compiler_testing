
#include <stdio.h>

int function() {
    static int count = 0; // A static variable
    return ++count;
}

int main() {
    printf("Function call #%d\n", function()); // Should print "Function call #1"
    printf("Function call #%d\n", function()); // Should print "Function call #2"
    return 0;
}
