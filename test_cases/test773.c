
#include <stdio.h>

void print_message(char *msg) {
    printf("%s\n", msg);
}

int main() {
    char* message = "Hello, World!";
    
    print_message(message);
    
    return 0;
}
