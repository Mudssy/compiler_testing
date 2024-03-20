
#include <stdio.h>

__attribute__((hot)) void hot_function() {
    printf("Hello from the hot function!\n");
}

int main() {
    for (int i = 0; i < 100; i++) {
        hot_function();
    }
    return 0;
}
