
#include <stdio.h>

void print_hello(int count) {
    for (int i = 0; i < count; ++i) {
        printf("Hello, world!\n");
    }
}

int main() {
    int x = 5;
    if (x > 3) {
        print_hello(x);
    } else {
        printf("Less than or equal to 3\n");
    }
    return 0;
}
