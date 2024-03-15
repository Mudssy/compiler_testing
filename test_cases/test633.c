
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* dynamicArray = (int*) malloc(5 * sizeof(int));
    
    if(dynamicArray == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }
    
    for(int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 2;
    }
    
    for(int i = 0; i < 5; i++) {
        printf("dynamicArray[%d] = %d\n", i, dynamicArray[i]);
    }
    
    free(dynamicArray);
    
    return 0;
}
