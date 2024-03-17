
#include <stdio.h>
#include <stdalign.h>

int main() {
    alignas(16) int arr[4] = {1, 2, 3, 4};
    printf("%lu\n", (long unsigned)((uintptr_t)&arr[0]) % 16);
    return 0;
}
