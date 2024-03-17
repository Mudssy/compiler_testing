
#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
