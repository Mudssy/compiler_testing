
#include <stdlib.h>
#include <stdio.h>

void my_cleanup(void) { printf("atexit executed\n"); }

int main() {
    if (atexit(my_cleanup) != 0) {  // register the cleanup function
        fprintf(stderr, "Cannot set exit function\n");
        return EXIT_FAILURE;
    }

    printf("Hello World!\n");
    return EXIT_SUCCESS;
}
