
#include <stdio.h>

int main() {
    int result = 0;
    (int[3]){1, 2, 3}[result];
    printf("%d\n", result);
    return 0;
}
