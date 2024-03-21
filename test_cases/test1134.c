
#include <stdio.h>

int main() {
    int a = 0, b = 1;
    
    // This compound statement expression is a GNU extension
    ({
        a = b + 2;
        printf("a = %d\n", a);
        a;
    });
    
    return 0;
}
