
#include <string.h>
#include <stdio.h>

int main() {
    char str[100] = "This is a test string";
    const char delimiter[2] = "-";
    char *token;
    
    // Get the first token
    token = strtok(str, delimiter);
    
    // Walk through other tokens
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter);
    }
    
    return 0;
}
