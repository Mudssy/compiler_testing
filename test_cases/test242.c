
#include <stdio.h>

#define print_args(...) printf("Arguments received: %d\n", sizeof((int[]){__VA_ARGS__})/sizeof(int))

int main() {
    int a = 1, b = 2, c = 3;
    
    print_args();
    print_args(a);
    print_args(a, b);
    print_args(a, b, c);
    
    return 0;
}
