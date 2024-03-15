
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    
    for (index = 0; index < 5; index++) {
        __attribute__((guarded_by(arr)))
        printf("Element at arr[%d] is: %d\n", index, arr[index]);
    }
    
    return 0;
}
