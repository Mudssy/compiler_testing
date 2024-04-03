
#include <stdio.h>

struct S { int x; };
union U { int y; double z; };

int main() {
    struct S s = { 10 };
    union U u = { .y = 20 };
    
    printf("Structure member access: %d\n", s.x);
    printf("Union member access: %d\n", u.y);
    
    return 0;
}
