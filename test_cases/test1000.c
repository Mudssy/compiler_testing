
#include <stdio.h>

int main() {
    int x = 0;
    __block int y = 10;

    ^(void){
        printf("Inside block, x: %d\n", x);
        printf("Inside block, y: %d\n", y);
        y++;
    }();

    printf("After block, y: %d\n", y);

    return 0;
}
