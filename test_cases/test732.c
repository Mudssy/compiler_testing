
#include <stdio.h>

void __attribute__((used)) used_function() {
    printf("Used function called\n");
}

void unused_function() {
    printf("Unused function called\n");
}

int main(void) {
    used_function();
    unused_function();
    return 0;
}
