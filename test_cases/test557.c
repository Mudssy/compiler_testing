
#include <stdio.h>

int main() {
    int arr[10], i;
    
    for (i = 0; i < 10; ++i) {
        arr[i] = i + 1;
    }
    
    #pragma acc parallel loop
    for(i=0; i<10; ++i){
       printf("Element[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
