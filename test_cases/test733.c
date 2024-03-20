
#include <stdio.h>

void __attribute__((visibility("default"))) my_function() {
    printf("Hello, World!\n");
}

int main() {
    my_function();
    return 0;
}
