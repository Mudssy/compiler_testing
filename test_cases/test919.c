
#include <stdio.h>
int main() {
    int x = 0;
    if (__builtin_expect(x == 0, 1)) {
        printf("Zero\n");
    } else {
        printf("Not zero\n");
    }
    return 0;
}
