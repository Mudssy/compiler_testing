
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return non-zero to indicate failure
    }

    free(p);
    free(p); // Double freeing memory

    printf("Program executed successfully\n");
    return 0; // Return zero to indicate success
}
