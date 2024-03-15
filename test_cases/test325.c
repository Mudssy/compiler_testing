
#include <stdio.h>

typedef struct {
    int a;
    int b;
} my_struct;

int main() {
    my_struct s = { .b = 5, .a = 2 };
    
    printf("s.a: %d\n", s.a);
    printf("s.b: %d\n", s.b);

    return 0;
}
