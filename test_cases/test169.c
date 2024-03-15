
#include <stdio.h>
#include "clanglibIndex" // Include clang libIndex for Indexing of attribute annotations feature

int main() {
    printf("This program tests the Indexing of attribute annotations feature for the C programming language.\n");
    
    // Test the Indexing of attribute annotations feature
    int result = clanglibIndex_test(); // Call the testing function from clang libIndex library
    if (result == 0) {
        printf("The feature is supported. \n");
    } else {
        printf("The feature is not supported. \n");
    }
    
    return 0;
}
