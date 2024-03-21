
#include <stdio.h>

int main() {
    int i = 5; // Change this value to see different outputs
    
    if (i > 0)
        printf("The number %d is positive.\n", i);
    else if (i < 0)
        printf("The number %d is negative.\n", i);
    else
        printf("The number %d is zero.\n", i);
    
    return 0;
}
