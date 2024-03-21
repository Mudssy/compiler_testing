
#include <stdio.h>

// Declaration for generic function 
void hello_world(_Generic((0), int: int, double: double)) {
    _Generic((0),
             int: ({ printf("Hello\n"); }), // Hello will be printed when the type is integer
             default: ({ printf("World\n"); })  // World will be printed when the type is not an integer
            );
}

int main() {
    hello_world(0);        // Will print "Hello"
    hello_world((0.0));    // Will print "World"
    return 0;              // Make sure the program returns, don't run forever
}
