
#include <stdio.h>

void my_func(int* a __attribute__((nonnull)), int *b __attribute__((nonnull))) {
    printf("The program ran successfully\n");
}

int main() {
    int x = 5, y = 10;

    if (x != 0 && y != 0) {
        my_func(&x, &y); // no null pointer here
    } else {
        printf("A null pointer was passed\n");
    }

    return 0; // ensures that the program returns normally
}
