
#include <stdio.h>

int main() {
    int i = 5; // 0101 in binary
    printf("%d\n", __builtin_ffs(i));
    return 0;
}
