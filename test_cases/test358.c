
#include <stdio.h>

void shuffle(int *array, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
}

void print_array(int *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int input[] = {1, 2, 3, 4, 5};
    shuffle(input, 5);
    print_array(input, 5);
    return 0;
}
