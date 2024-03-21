
#include <stdio.h>

typedef struct {
    int x;
} S;

union U {
    int y;
};

int main() {
    S s = { .x = 10 };
    union U u;
    u.y = 20;
    
    printf("Struct: %d\n", s.x); // Outputs "Struct: 10"
    printf("Union: %d\n", u.y); // Outputs "Union: 20"
    
    return 0;
}
