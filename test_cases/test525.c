
#include <stdio.h> // Standard library, no need for clanginclude here
#define likely(x) __builtin_expect((x), 1)
#define unlikely(x) __builtin_expect((x), 0)

int main() {
    int a = 5;
    if (likely(a == 5)) { // Replace with your own condition that can be predicted
        printf("Predicted\n");
    } else {
        printf("Not Predicted\n");
    }
    
    return 0; // Makes sure the program does not run forever. It will always return in this code
}
