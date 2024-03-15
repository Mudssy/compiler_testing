
#include <stdio.h>

int main() {
    int a = 0;
    for(int i = 1; i <= 100000000; ++i) {
        a += i;
    }
    printf("Result: %d\n", a);
    return 0;
}
