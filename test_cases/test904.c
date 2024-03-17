
#include <stdio.h>

typedef struct {
    int x;
} StructA;

void modify(StructA *s) {
    s->x = 10;
}

int main() {
    StructA obj;
    obj.x = 5;
    modify(&obj);
    printf("Value of obj.x after modify: %d\n", obj.x);
    return 0;
}
