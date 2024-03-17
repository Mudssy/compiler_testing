
#include <stdio.h>

#define TOKENPASTE(x, y) x ## y
#define PRINT_TOKEN(token) printf("Token is: " #token "\n")

int main() {
    int TOKENPASTE(foo, 1);
    foo1 = 42;
    
    PRINT_TOKEN(foo1);
    
    return 0;
}
