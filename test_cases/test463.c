
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    if (p != NULL) {
        printf("Dynamic memory allocation successful without throwing an exception.\n");
        free(p);
    } else {
        printf("Dynamic memory allocation failed and threw an exception.\n");
    }
    return 0;
}
