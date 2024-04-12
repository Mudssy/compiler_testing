
#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    if(arr[0][0] == 1 && arr[0][1] == 2 && arr[0][2] == 3 && 
       arr[1][0] == 4 && arr[1][1] == 5 && arr[1][2] == 6) {
        printf("Test Passed\n");
    } else {
        printf("Test Failed\n");
    }
    
    return 0;
}
