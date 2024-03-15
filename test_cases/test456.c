
#include <stdio.h>

int __attribute__((visibility("hidden"))) hidden_function() {
    return 42;
}

int main() {
    int result = hidden_function();
    printf("%d\n", result);
    return 0;
}
