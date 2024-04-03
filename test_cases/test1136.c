
#include <stdio.h>

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (int i = 0; i < 10; ++i) {
        __builtin_prefetch(arr + i, 0);
        printf("%d\n", arr[i]);
    }
    return 0;
}
