
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf("The first argument is: %s\n", argv[1]);
    } else {
        printf("No arguments were passed.\n");
    }
    return 0;
}
