
#include <stdio.h>

// Define a macro that prints out "Hello, Macro!"
#define MY_MACRO printf("Hello, Macro!\n")

int main() {
    // Expand the macro here
    MY_MACRO;
    return 0;
}
