
#include <stdio.h>

int main() {
    int *null_pointer = NULL;

    if (null_pointer == 0) {
        printf("NULL is equal to 0\n");
    } else {
        printf("NULL is not equal to 0\n");
    }
    
    return 0;
}
