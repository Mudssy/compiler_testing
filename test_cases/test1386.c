
#include <stdlib.h>
#include <stdio.h>

void exit_handler(void) {
    printf("This is printed before exiting\n");
}

int main(void) {
    atexit(exit_handler);
    abort();
    return 0;
}
