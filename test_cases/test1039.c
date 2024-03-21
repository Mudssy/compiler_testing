
#include <stdio.h>

int main() {
    int x = 0; // empty line before this statement
    
    switch (x) {
        case 1: printf("This is a test for clang-format's handling of empty class body formatting feature.\n"); break;
        default: ; // this will be an empty line when the code is formatted using clang-format.
    }
    
    return 0;
}
