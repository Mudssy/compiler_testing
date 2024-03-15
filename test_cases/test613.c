
#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int i;
    for(i=0; i<5; i++) {
        printf("Element at index %d is: %d\n", i, array[i]);
    }
    return 0;
}
