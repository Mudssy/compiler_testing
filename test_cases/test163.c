
#include <stdio.h>

namespace foo {
    int x = 42;
}

namespace bar = foo; // namespace aliasing

int main() {
    printf("Value of foo::x: %d\n", foo::x);
    printf("Value of bar::x: %d\n", bar::x);
    return 0;
}
