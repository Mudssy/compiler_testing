
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; ++i) {
        if(arr[i] != i + 1){
            printf("20\n");
            return 0;
        }
    }
    printf("10\n");
    return 0;
}
