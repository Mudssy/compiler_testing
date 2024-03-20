
#include <stdio.h>

typedef struct {
    int x;
    float y;
} MyStruct;

void print_struct(MyStruct *s) {
    printf("x: %d, y: %f\n", s->x, s->y);
}

int main() {
    MyStruct s = {5, 2.3};
    print_struct(&s);
    return 0;
}
