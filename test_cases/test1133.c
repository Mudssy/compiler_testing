
#include <stdio.h>

int main(void) {
    int i = 0;
    printf("Size and alignment of 'int': %zu, %zu\n", sizeof(i), _Alignof(i));
    
    float f = 0.0f;
    printf("Size and alignment of 'float': %zu, %zu\n", sizeof(f), _Alignof(f));
    
    double d = 0.0;
    printf("Size and alignment of 'double': %zu, %zu\n", sizeof(d), _Alignof(d));
    
    char c = 'a';
    printf("Size and alignment of 'char': %zu, %zu\n", sizeof(c), _Alignof(c)); 

    return 0;
}
