
#include <stdio.h>

int is_same(void* x, void* y) {
    // Check if the values point to same location in memory
    if (x == y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a = 1; char b = 'x';
    printf("%d\n", is_same((void*)&a, (void*)&a)); // prints 1
    printf("%d\n", is_same((void*)&b, (void*)&b)); // prints 1
    return 0;
}
