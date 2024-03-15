
#include <stdio.h>

int main() {
    int n = 3;
    int m = 2;
    
    int arr[m][n] = { {1, 2, 3}, {4, 5, 6} };
    int (*ptr)[n];
    
    ptr = arr;
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", *(*(ptr+i)+j));
        }
        printf("\n");
    }
    
    return 0;
}
