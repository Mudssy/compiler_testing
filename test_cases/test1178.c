
#include <stdio.h>

int main() {
    char buf[BUFSIZ]; /* Temporary buffer */
    
    if (setvbuf(stdout, buf, _IOFBF, BUFSIZ) != 0) {
        printf("Failed to set buffer for stdout\n");
        return 1;
    }
    
    printf("This is a test message\n");
    
    if (fflush(stdout) != 0) {
        printf("Failed to flush stdout\n");
        return 1;
    }
    
    return 0;
}
