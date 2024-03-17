
#include <stdio.h>

void function() {
    printf("This is a function without braces.\n");
    return;
}

int main() {
    function();
    printf("Braces test passed!\n");
    return 0;
}
