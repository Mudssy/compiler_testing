
#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    const int i = 5; // constant integer expression
    printf("%d\n", array[i - 6]);
    return 0;
}
