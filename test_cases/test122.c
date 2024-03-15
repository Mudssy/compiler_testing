
#include <stdio.h>

int main() {
    int arr[3][2] = { [0][1] = 4, [1][0] = 2, [2][1] = 6 };
    printf("Array values are: %d, %d, %d\n", arr[0][1], arr[1][0], arr[2][1]);
    return 0;
}
