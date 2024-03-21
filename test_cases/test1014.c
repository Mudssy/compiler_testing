
#include <stdio.h>

struct my_struct {
    int a;
    float b;
};

int main() {
    struct my_struct s = {10, 20.5};

    printf("my_struct: a = %d, b = %f\n", s.a, s.b);

    return 0;
}
