
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Coordinate;

int main() {
    int arr[] = {1, 2, 3};
    printf("Array initializer: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    Coordinate coord[] = {
        [0] = {.x = 4, .y = 5},
        [1] = {.x = 6, .y = 7}
    };
    printf("Struct array initializer: %d, %d; %d, %d\n", coord[0].x, coord[0].y, coord[1].x, coord[1].y);

    union {
        int i;
        float f;
    } u = {.f = 3.14f};
    printf("Union initializer: %d\n", u.i);

    return 0;
}
