
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Address of num: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
