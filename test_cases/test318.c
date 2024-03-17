
#include <stdio.h>

typedef struct {
    int x;
} Foo;

Foo* make_foo(int x) {
    Foo *f = malloc(sizeof(*f));
    f->x = x;
    return f;
}

void foo_print(const Foo *f) {
    printf("Foo: %d\n", f->x);
}

int main() {
    Foo* f = make_foo(42);
    foo_print(f);
    free(f);
    return 0;
}
