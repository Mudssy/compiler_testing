
#include <stdio.h>

typedef struct {
    int x;
} inner_t;

typedef struct {
    inner_t inner_struct;
    int y;
} outer_t;

int main() {
    outer_t outer_struct = { {10}, 20 };
    printf("Nested Structures Output: %d, %d\n", outer_struct.inner_struct.x, outer_struct.y);
    return 0;
}
