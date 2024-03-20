
#include <stdio.h>

#define print(...) _print((int[]){__VA_ARGS__}, sizeof((int[]){__VA_ARGS__})/sizeof(int))
void _print(int *nums, int count) {
    for (int i = 0; i < count; ++i)
        printf("%d ", nums[i]);
    printf("\n");
}

int main() {
    print(1, 2, 3); // prints "1 2 3 "
}
