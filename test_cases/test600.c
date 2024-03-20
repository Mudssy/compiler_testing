
#include <stdio.h>

// External linkage
extern void externalFunction();
void externalFunction() {
    printf("External Function\n");
}

static void internalStaticFunction() {
    printf("Internal Static Function\n");
}

int main() {
    // Calling an external function
    externalFunction();
    
    // Calling an internal static function
    internalStaticFunction();
    
    return 0;
}
