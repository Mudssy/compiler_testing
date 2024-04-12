
#include <stdio.h>

// File scope variables
extern int globalVar;
static int fileScopeVar = 10;

int main() {
    printf("File Scope Variable Value: %d\n", fileScopeVar);
    printf("Global Variable Value: %d\n", globalVar);
    
    return 0;
}
