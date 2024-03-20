
#include <stdio.h>

int main() {
    union u {
        int a;
        double b;
    };
    
    printf("The size is %zu\n", sizeof(union u));
    
    return 0;
}
