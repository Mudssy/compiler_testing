
#include <stdio.h>

struct {
    int a;
    char b[10];
} my_struct = { .a = 5, .b = "Hello" }; // designated initializer

int main() {
    if (my_struct.a == 5 && !strcmp(my_struct.b, "Hello")) {
        printf("Designated Initializers Passed\n");
    } else {
        printf("Designated Initializers Failed\n");
    }
    
    return 0; // Make sure the test case returns and doesn't run forever
}
