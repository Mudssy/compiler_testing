
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(10 * sizeof(int));
    
    if (ptr != NULL) {
        printf("Memory allocation successful.\n");
    } else {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    free(ptr);
    ptr = NULL;

    return 0;
}
