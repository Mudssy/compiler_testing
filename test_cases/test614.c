
#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("The array has %d elements.\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
