
#include <stdio.h>

typedef enum {
    ONE = 1,
    TWO,
    THREE,
} TestEnum;

int main() {
    TestEnum test = TWO;
    printf("Value of test is %d\n", test);
    return 0;
}
