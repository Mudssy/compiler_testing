
#include <stdio.h>

void test_goto() {
    int num = 10;
label:
    printf("Number is %d\n", num);
}

int main(void) {
    goto label;
    return 0;
}
