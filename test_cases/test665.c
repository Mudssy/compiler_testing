
#include <stdio.h>

#define MY_MAX(a, b) ((a) > (b) ? (a) : (b))
#define DOUBLE_IT(x) ((x) * 2)

int main() {
    printf("%d\n", MY_MAX(10, 20) * DOUBLE_IT(3));
    return 0;
}
