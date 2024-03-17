
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    printf("Before modification: x = %d, y = %d\n", x, y);

    int (*func_ptr)(int, int) = &foo;
    func_ptr(x, y);

    printf("After modification: x = %d, y = %d\n", x, y);

    return 0;
}

int foo(int a, int b) {
    static int count = 0;
    if (count < 3) {
        count++;
        a += 2;
        b -= 1;
    }
    printf("Function call: %d\n", count);
    return 0;
}
