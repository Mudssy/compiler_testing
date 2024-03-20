
#include <stdio.h>

int main() {
    _Alignas(double) char buffer[sizeof(double)]; // create an aligned buffer of sufficient size for a double
    
    printf("Size: %zu\n", sizeof(buffer)); // print the size of the array
    
    return 0;
}
