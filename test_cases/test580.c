
#include <stdio.h>

// Function to be called
void print_message(char *message) {
    printf("%s\n", message);
}

int main() {
    // Test function call and check output
    char *test_message = "Hello, World!";
    print_message(test_message);
    
    return 0;
}
