
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    auto add = [=](int x) -> int { return x + a; };
    auto subtract = [&](int x) -> int { return x - b; };

    printf("Add: %d\n", add(3));
    printf("Subtract: %d\n", subtract(8));

    return 0;
}
