
#include <stdio.h>

#pragma pack(1) 
struct test {
    char a;
    int b;
};

int main() {
    printf("Size of struct test: %lu\n", sizeof(struct test));
    return 0;
}
