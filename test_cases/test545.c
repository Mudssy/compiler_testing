
#include <stdio.h>

int main() {
    int result = __builtin_expect(5 > 3, 1);
    if (result) {
        printf("True branch taken\n");
    } else {
        printf("False branch taken\n");
    }
    return 0;
}
