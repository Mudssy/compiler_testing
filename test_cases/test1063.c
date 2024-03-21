
#include <stdio.h>

void foo() {
    printf("Inside foo\n");
}

int main() {
    if (1)
        foo();
    else {
        printf("Not inside foo\n");
        return 0;
    }
}
