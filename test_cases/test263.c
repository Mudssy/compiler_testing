
#include <stdio.h>

int main(int argc, char **argv) {
    if (argc > 1) {
        printf("Command-line argument detected: %s\n", argv[1]);
    } else {
        printf("No command-line arguments detected.\n");
    }
    return 0;
}
