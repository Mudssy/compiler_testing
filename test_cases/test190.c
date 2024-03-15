
#include <stdio.h>

typedef struct {
    int a;
    float b;
} test_struct;

int main() {
    test_struct ts = {10, 22.5};
    int a;
    float b;

    printf("Before structured bindings:\n");
    printf("a: %d\n", ts.a);
    printf("b: %.2f\n", ts.b);

    {
        test_struct t = ts;
        a = t.a;
        b = t.b;
    }

    printf("\nAfter structured bindings:\n");
    printf("a: %d\n", a);
    printf("b: %.2f\n", b);

    return 0;
}
