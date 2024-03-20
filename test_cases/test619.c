
#include <stdio.h>

int main() {
    char string[] = "Hello, World!"; // Input your string here
    
    printf("Hello World\n");
    
    for(int i = 0; string[i] != '\0'; i++) {
        printf("%c\n", string[i]);
    }

    return 0;
}
