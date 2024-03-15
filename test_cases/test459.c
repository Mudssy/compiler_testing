
#include <stdio.h>

struct __attribute__((packed)) S {
    char a;
    int b;
    short c;
};

int main() {
    struct S s = {'A', 123456, 100};
    printf("Size of packed structure: %lu\n", sizeof(s));
    return 0;
}
