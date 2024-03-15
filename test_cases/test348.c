
#include <stdio.h>

int main() {
    int arr1[4] = {1, 2, 3, 4};
    double arr2[4] = {5.0, 6.0, 7.0, 8.0};
    int shuffle_arr[] __attribute__((vector_size(16))) = (int){arr1[0], arr2[0]};

    for (int i = 0; i < 4; ++i) {
        printf("%d %f\n", ((int*)shuffle_arr)[i], ((double*)shuffle_arr)[i]);
    }

    return 0;
}
