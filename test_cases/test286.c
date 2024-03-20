
#include <stdio.h>

void foo(int x) {
    if (x == 10) {
        printf("x is 10\n");
    } else {
        printf("x is not 10\n");
    }
}

int main() {
    for (int i = 0; i < 20; ++i) {
        foo(i);
    }
    
    return 0;
}
