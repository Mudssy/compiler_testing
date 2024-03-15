
#include <stdio.h>
#include <stdalign.h>

typedef struct {
    int a;
    char b;
} test_struct;

int main() {
    alignas(32) test_struct my_struct = {1, 'a'};

    printf("Size of test_struct: %zu\n", sizeof(test_struct));
    printf("Alignment of my_struct: %zu\n", _Alignof(my_struct));

    return 0;
}
