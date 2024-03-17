
#include <stdio.h>
#include <errno.h>

int main() {
    errno = 0;
    printf("This program will print out some specific output based on errno feature:\n");
    
    int result = 1 / 0;
    if (errno == ERANGE) {
        perror("Result: ");
    } else {
        printf("Error not detected.\n");
    }

    return 0;
}
