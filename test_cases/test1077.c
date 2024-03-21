
#include <stdio.h>

void foo(int x,
    int y) // this breaks the function definition after the type
{
    printf("%d %d\n", x, y);
}

int main() {
    foo(10, 20); // prints "10 20"
    return 0;
}
