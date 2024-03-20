
#include <stdio.h>

// The following attribute tells Clang not to include this function in code coverage reports
__attribute__((no_sanitize("coverage"))) void untracked() { printf("Untracked!\n"); }

int main() { 
    printf("Tracked!\n"); 
    untracked(); // This function should not be included in coverage
}
