
#include <stdio.h>

int main() {
    int arr[3][2] = {{10, 15}, {20, 25}, {30, 35}};
    int(*ptr)[2];

    for (int i = 0; i < 3; i++) {
        ptr = &arr[i];
        printf("Value at arr[%d] is %d and %d\n", i, *((*ptr) + 0), *((*ptr) + 1));
    }

    return 0;
}
