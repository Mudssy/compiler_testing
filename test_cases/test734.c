
#include <stdio.h>

int __attribute__((visibility("hidden"))) hidden_function() {
    return 42;
}

int main() {
    int result = hidden_function();
    printf("The hidden function returned: %d\n", result);
    return 0;
}
