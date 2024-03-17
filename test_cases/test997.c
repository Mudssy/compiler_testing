
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int z = 30;

    // This expression will generate a dead register because the result is not stored anywhere
    y + z;

    printf("The value of x is: %d\n", x);

    return 0;
}
