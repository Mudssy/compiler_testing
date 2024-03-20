
#include <stdio.h>
#define SIZE 10000
int main() {
    int array[SIZE];
    for (int i = 0; i < SIZE; i++) {
        array[i] = i;
        __builtin_prefetch(&array[(i + 1) % SIZE], 1, 3);
    }
    printf("Prefetch operations tested successfully!\n");
    return 0;
}
