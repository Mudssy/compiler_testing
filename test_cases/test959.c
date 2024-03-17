
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int *ptr_x = &x;
    int *ptr_y = &y;

    printf("Address of x: %p\n", ptr_x);
    printf("Address of y: %p\n", ptr_y);

    return 0;
}
