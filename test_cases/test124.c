
#include <stdio.h>

int main() {
    printf("This file is %s\n", __FILE__);
    printf("This line number is %d\n", __LINE__);
    printf("Compiled on %s\n", __DATE__);
    
    return 0;
}
