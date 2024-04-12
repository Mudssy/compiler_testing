
#include <stdio.h>

int main(void) {
    char *format_string = "Hello, %s!\n"; // Externally controlled format string
    printf(format_string, "World");       // Use of externally-controlled format string
    return 0;                            // Make sure the program returns in a finite amount of time
}
