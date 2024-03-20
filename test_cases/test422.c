
#include <stdio.h>

typedef struct {
    int x;
} S;

int main() {
    S *s = &(S){ .x = 42 };
    printf("%d\n", s->x);
    return 0;
}
