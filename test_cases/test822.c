
#include <stdio.h>

int main() {
    int a = 5;
    if (1) {
        int a = 10;
        printf("Block scoped variable: %d\n", a);
    }
    printf("Global scoped variable: %d\n", a);
    return 0;
}
