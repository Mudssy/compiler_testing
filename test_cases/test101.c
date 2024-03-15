
#include <stdio.h>

static int staticFunction(int input) {
    return input * 2;
}

int main() {
    int result = staticFunction(5);
    printf("The output of the static function is: %d\n", result);
    return 0;
}
