
#include <stdio.h>

int main() {
    alignas(16) int arr[4];
    printf("Address of first element in aligned array: %p\n", (void*)&arr[0]);
    return 0;
}
