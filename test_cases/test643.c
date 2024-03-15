
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic error "-Wundefined-var-template"
    
    int x = 10;
    printf("Value of x: %d\n", x);

    #pragma clang diagnostic pop
    return 0;
}
