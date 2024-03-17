
#include <stdio.h>

int main() {
    int arr[5][10];
    int (*ptr)[10] = &arr[2];
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("Value at arr[%d][%d]: %d\n", i, j, (*(ptr - i))[j]);
        }
    }
    
    return 0;
}
