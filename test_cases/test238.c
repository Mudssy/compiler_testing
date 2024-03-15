
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Initial values: a=%d, b=%d\n", a, b);
    
    // Testing punctuator feature: a++, --b, a--, ++b
    printf("After applying punctuators: a=%d, b=%d\n", a++, --b, a--, ++b);
    
    return 0;
}
