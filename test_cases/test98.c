
#include <stdio.h>
#include <stdbool.h>

typedef union {
    struct {
        int x;
        float y;
    };
    long long z;
} TestUnion;

int main() {
    TestUnion t;
    t.x = 10;
    t.y = 20.5f;
    printf("Result: %lld\n", t.z);
    return 0;
}
