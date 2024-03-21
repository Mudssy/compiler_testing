
#include <stdio.h>

int main() {
    int x = 5;
    int y = x;  // This should trigger an AA remark for 'x' being aliased to 'y'.

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    return 0;
}
