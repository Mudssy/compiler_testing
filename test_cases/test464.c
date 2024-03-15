
#include <stdio.h>

__attribute__((returns_nonnull)) int *example(int *ptr) {
    if (*ptr == 0) {
        return ptr;
    }
    return NULL;
}

int main() {
    int a = 10;
    int b = 0;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    int *result_a = example(&a);
    int *result_b = example(&b);

    if (result_a) {
        printf("a is non-null: %d\n", *result_a);
    } else {
        printf("a is null\n");
    }

    if (result_b) {
        printf("b is non-null: %d\n", *result_b);
    } else {
        printf("b is null\n");
    }

    return 0;
}
