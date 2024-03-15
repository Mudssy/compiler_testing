
#include <stdio.h>

void print_arguments(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
}

int main(int argc, char *argv[]) {
    print_arguments(argc, argv);
    return 0;
}
