
#include <stdio.h>

// Function declarations
int return_integer();
float return_floating_point();
char* return_string();
void return_void();

int main() {
    printf("Integer returned: %d\n", return_integer());
    printf("Float returned: %.2f\n", return_floating_point());
    char *str = return_string();
    printf("String returned: %s\n", str);
    // Void functions cannot be tested directly, we need to ensure they don't cause a seg fault or infinite loop
    return_void();
    printf("Void function returned nothing.\n");
    return 0;
}

// Function definitions
int return_integer() {
    return 5;
}

float return_floating_point() {
    return 3.14f;
}

char* return_string() {
    static char str[256] = "Hello, world!";
    return str;
}

void return_void() {
    // This function does nothing, but it's valid in C
}
