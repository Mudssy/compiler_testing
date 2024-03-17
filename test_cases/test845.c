
#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
    int z = 3;
    int result;

    switch (x) {
        case 0:
            result = y;
            break;
        default:
            result = z;
            break;
    }

    printf("%d\n", result);

    return 0;
}
