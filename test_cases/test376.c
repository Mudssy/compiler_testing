
#include <stdio.h>

int main() {
    int a = 1;  //0001 in binary
    printf("a = %d\n", a);  
    
    int b = a << 2;  //Shift left by 2 places, should give 4 (0b100)
    printf("b = %d\n", b);  

    int c = a | 3;  //Bitwise OR with 3, should give 3 (0b11)
    printf("c = %d\n", c);  
    
    return 0;
}
