
#include <stdio.h>

void print_message(const char *msg) {
    puts(msg);
}

int main() {
    const char *hello = "Hello, World!";  // `const` variable
    print_message(hello);                 // Call function with `const` argument
    return 0;                             // Return statement within reasonable time frame
}
