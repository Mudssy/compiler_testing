
#include <stdio.h>

int main() {
    int result = 1;
    asm("label_name: addl $2, %0" : "=r"(result));
    printf("%d\n", result);
    return 0;
}
