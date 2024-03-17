
#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;
    
    if (*ptr == 5) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }
    
    return 0;
}
