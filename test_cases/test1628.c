
#include <stdio.h>

struct test {
    unsigned int x:1;
};

int main() {
    struct test t = { 0 };
    
    if (t.x != 0) {
        printf("Initialization failed\n");
        return 1;
    }

    t.x = 1;
    if (t.x != 1) {
        printf("Assignment failed\n");
        return 2;
    }

    t.x = 0;
    if (t.x != 0) {
        printf("Reassignment failed\n");
        return 3;
    }

    printf("All tests passed\n");
    return 0;
}
