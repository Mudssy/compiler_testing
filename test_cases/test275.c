
#include <stdio.h>

void print_debug_info(int value) {
    printf("Debug info: Value is %d\n", value);
}

int main() {
    int testValue = 10;
    print_debug_info(testValue);

    return 0;
}
