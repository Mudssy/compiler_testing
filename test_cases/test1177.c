
#include <stdio.h>

int main() {
    char buf[BUFSIZ];
    
    // Set buf to NULL to disable buffering
    setbuf(stdout, NULL);
    
    printf("No buffering enabled.\n");
    
    // If output is not immediately printed, the buffer is working correctly
    while (1) { } 
  
    return 0;
}
