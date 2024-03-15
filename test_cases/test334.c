
#include <stdio.h>

// API Notes
#define MY_API_NOTE(msg) __attribute__((annotate("apiNote:" #msg)))

MY_API_NOTE("This is a custom API note") void print_message() {
    printf("Custom API Note: This function prints a message.\n");
}

int main() {
    print_message();
    return 0;
}
