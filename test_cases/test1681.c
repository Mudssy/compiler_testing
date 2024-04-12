
#include <stdio.h>

void foo();
void bar(int i);

int main() {
    foo();
    bar(10);
    return 0;
}

void foo() {
    printf("Hello from foo\n");
}

void bar(int i) {
    printf("Value of i: %d\n", i);
}
