
#include <string.h>
#include <stdio.h>

int main() {
    int errnum = 13; // example error number, change this to test different errors
    printf("Error %d: %s\n", errnum, strerror(errnum));
    
    return 0;
}
