
#include <stdio.h>

#define print(type, ...) _Generic((type), \
    int: print_int, \
    float: print_float)(__VA_ARGS__)
    
void print_int(int i) {
    printf("Integer: %d\n", i);
}

void print_float(float f) {
    printf("Float: %f\n", f);
}

int main() {
    int a = 5;
    float b = 3.14;
    
    print(a, a);
    print(b, b);
    
    return 0;
}
