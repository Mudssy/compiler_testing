
#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr;
    
    ptr = array;
    printf("Values in the array are: \n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr+i));
    }

    return 0;
}
