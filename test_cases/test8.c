
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Address of a: %p\n", ptr);
    printf("Value of a: %d\n", *ptr);

    return 0;
}