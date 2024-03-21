
#include <stdio.h>

struct align_test {
    char c;
    int i;
};

int main() {
    printf("Size of align_test structure: %lu\n", sizeof(struct align_test));
    struct align_test test1, test2;
    if (&test1.i == &test2.i) {
        printf("Structure members are aligned as expected.\n");
    } else {
        printf("Structure members are not properly aligned.\n");
    }
    return 0;
}
