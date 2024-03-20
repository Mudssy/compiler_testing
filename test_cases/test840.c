
#include <stdio.h>

inline int add(int x, int y) { 
    int z;
    z = x + y;
    return z;
}

int main() {
    int result = 0;
  
    // Testing inline functions:
    printf("Testing inline functions:\n");
    
    result = add(5, 7);
    if (result == 12) {
        printf("Inline function works as expected.\n");
    } else {
        printf("Error: Inline function doesn't work as expected. Received %d instead of 12\n", result);
        return -1; // Returning non-zero value to indicate an error occurred
    }
  
    return 0; // Returning zero to indicate the program ran successfully
}
