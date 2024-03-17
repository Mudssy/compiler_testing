
#include <stdio.h>

int main() {
    int a = 5;
    printf("Original value of a: %d\n", a);
    
    // Testing unary operators
    ++a;
    printf("Value of ++a: %d\n", a);
    
    --a;
    printf("Value of --a: %d\n", a);
    
    a++;
    printf("Value of a++: %d\n", a);
    
    a--;
    printf("Value of a--: %d\n", a);
    
    return 0;
}
