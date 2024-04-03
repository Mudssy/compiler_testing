
#include <stdio.h>

// Macro definition for generic function
#define hello_world(x) _Generic((x), \
    int: printf("Hello\n"), \
    default: printf("World\n") \
)

int main() {
    hello_world(0);         // Will print "Hello"
    hello_world('a');       // Will print "World"
}
