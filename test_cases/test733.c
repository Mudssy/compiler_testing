
#include <stdio.h>

__attribute__((visibility("default"))) int stub_function(int x) {
    return x * 2;
}

int main() {
    int result = stub_function(5);
    printf("The result of the function call with argument 5 is: %d\n", result);
    return 0;
}
