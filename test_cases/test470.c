
#include <stdio.h>
#define ALLOC_SIZE(x) __builtin___alloc_size((x), 0)

int main() {
    int array[10];
    printf("The size of the 'array' is: %zu\n", ALLOC_SIZE(array));
    return 0;
}
