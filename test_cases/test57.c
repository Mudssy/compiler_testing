
#include <stdio.h>

// This is the inline function that you want to test with.
inline void myFunction() { printf("Inline function was defined\n"); }

int main(void) {
    // Call your function here.
    myFunction();
    return 0;
}
