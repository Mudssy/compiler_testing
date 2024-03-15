
#include <stdio.h>

typedef struct {
    int x;
    float y;
} MyStruct;

int main() {
    MyStruct ms = {10, 20.5};

    printf("MyStruct: x=%d, y=%.1f\n", ms.x, ms.y);
    return 0;
}
