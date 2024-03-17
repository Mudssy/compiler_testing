
#include <stdio.h>

int main() {
    long array[10][10];

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            array[i][j] = i * 10 + j;
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("array[%d][%d] = %ld\n", i, j, array[i][j]);
        }
    }

    return 0;
}
