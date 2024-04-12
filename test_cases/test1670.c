
#include <stdio.h>

int main() {
    int align = _Alignof(char);
    printf("Alignment of char is %d\n", align);
    
    return 0;
}
