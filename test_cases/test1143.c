
#include <stdio.h>

int main() {
    // Anonymous struct
    struct {
        int x;
        int y;
    } pointOne, pointTwo;

    pointOne.x = 10;
    pointOne.y = 20;

    pointTwo.x = 30;
    pointTwo.y = 40;

    printf("Point One: (%d, %d)\n", pointOne.x, pointOne.y);
    printf("Point Two: (%d, %d)\n", pointTwo.x, pointTwo.y);

    // Anonymous union
    union {
        int x;
        float y;
    } data;
    
    data.x = 10;
    printf("Union integer value: %d\n", data.x);

    data.y = 20.5f;
    printf("Union floating-point value: %.2f\n", data.y);

    return 0;
}
