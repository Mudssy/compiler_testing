
#include <stdio.h>
#include <stddef.h>

struct Test {
    int a;
    char b;
    double c;
};

int main() {
    printf("Offset of 'a': %zu\n", offsetof(struct Test, a));
    printf("Offset of 'b': %zu\n", offsetof(struct Test, b));
    printf("Offset of 'c': %zu\n", offsetof(struct Test, c));
    return 0;
}
