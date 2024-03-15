
#include <stdio.h>

int main() {
    int arr[3][2] = { [1][0] = 5, [1][1] = 6 };
    
    printf("Element at arr[1][0]: %d\n", arr[1][0]);
    printf("Element at arr[1][1]: %d\n", arr[1][1]);
    
    return 0;
}
