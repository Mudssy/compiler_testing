
#include <stdio.h>

int main() {
    int x = 0;
    goto label1;
    
label1:
    if (x == 0) {
        printf("Output: Control flow integrity options feature is working correctly.\n");
        x = 1;
        goto label1;
    } else {
        printf("Output: Control flow integrity options feature failed.\n");
    }
    
    return 0;
}
