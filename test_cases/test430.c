
#include <stdio.h>

struct aligned {
    char c;
    int n;
} __attribute__((aligned(8)));

int main() {
    printf("Alignment of struct aligned: %zu\n", _Alignof(struct aligned));

    return 0;
}
