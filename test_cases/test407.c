
#include <stdio.h>

int main(void) {
    int array[5] = {10, 20, 30, 40, 50};
    int *p[5];
    
    // Assigning addresses of elements of the array to p
    for (int i = 0; i < 5; ++i) {
        p[i] = &array[i];
    }
    
    printf("Array elements: ");
    for(int j=0;j<5;j++){
        printf("%d ", array[j]);
    }
    printf("\nValues stored at addresses pointed by pointers: ");
    for (int i = 0; i < 5; ++i) {
       printf("%d ", *p[i]);
    }
    
    return 0;
}
