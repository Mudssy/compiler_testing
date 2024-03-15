
#include <stdio.h>

int main() {
    int a = 0;
    for(int i = 0; i < 10000; ++i) {
        a += i;
    }
    printf("Result: %d\n", a);
    return 0;
}
