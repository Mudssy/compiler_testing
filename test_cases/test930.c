
#include <stdio.h>

int main() {
    int x = 10;
    printf("CHECK-DAG: x=%d\n", x);
    printf("CHECK-DAG: x=%d\n", x);
    return 0;
}
