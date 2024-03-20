
#include <stdio.h>

void __attribute__((visibility("hidden"))) hiddenFunction() {
    printf("This is a hidden function\n");
}

int main() {
    // Calling a hidden function should result in a linker error, so we'll skip this call 
    // hiddenFunction();
    
    printf("Main function executed successfully\n");
    return 0;
}
