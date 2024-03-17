
#include <stdio.h>

int main() {
    printf("This is a test program for the clanglibFormat section of the compiler.\n");
    printf("Testing the Break string literals feature:\n\n");
    
    printf("Original string literal:\n");
    printf("\"This is a test message.\"\n\n");
    
    printf("Break into multiple lines:\n");
    printf("\"This is a test \\\n"
           "message.\"\n\n");
    
    return 0;
}
