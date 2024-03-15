
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
        return -1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
