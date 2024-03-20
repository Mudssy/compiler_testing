
#include <stdio.h>

int main() {
    int i = 0;

start_loop:
    printf("Iteration %d\n", i);
    if (i < 10) {
        goto start_loop;
    }

    return 0;
}
