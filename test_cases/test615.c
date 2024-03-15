
#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Modify elements
    arr[1][2] = -1;
    arr[2][0] = -2;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
