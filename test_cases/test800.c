
#include <stdio.h>

void test_goto() {
label:
    int num = 10;
    printf("Number is %d\n", num);
}

int main(void) {
    test_goto();
    return 0;
}
