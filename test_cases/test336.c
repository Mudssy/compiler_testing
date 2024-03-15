
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 16;
    int* vec = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        vec[i] = i + 1;
    }

    for (int i = 0; i < n / 2; ++i) {
        int temp = vec[i];
        vec[i] = vec[n - i - 1];
        vec[n - i - 1] = temp;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", vec[i]);
    }

    free(vec);
    return 0;
}
