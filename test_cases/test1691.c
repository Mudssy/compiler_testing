
#include <stdio.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated");
        return 1;
    } else {
        *ptr = 5;
        printf("Memory successfully allocated and assigned: %d\n", *ptr);
        free(ptr);
        return 0;
    }
}
