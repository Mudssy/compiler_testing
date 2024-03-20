
#include <stddef.h>
#include <stdio.h>

struct S {
    int i;
    char c;
    double d;
};

int main() {
    printf("Offset of field 'i' in struct S is: %zu\n", offsetof(struct S, i));
    printf("Offset of field 'c' in struct S is: %zu\n", offsetof(struct S, c));
    printf("Offset of field 'd' in struct S is: %zu\n", offsetof(struct S, d));

    return 0; // make sure the program ends and does not run forever.
}
