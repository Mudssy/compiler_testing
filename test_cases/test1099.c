
#include <stdio.h>

typedef struct {
    int x;
    float y;
} MyStruct;

int main() {
    MyStruct my_struct;
    my_struct.x = 10;
    my_struct.y = 20.5;

    printf("my_struct.x: %d, my_struct.y: %.1f\n", my_struct.x, my_struct.y);

    return 0;
}
