
#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 12;
    
    if ((a & 3) == (b & 3) || (a & 3) == (c & 3)) {
        printf("Operands are aligned\n");
    } else {
        printf("Operands are not aligned\n");
    }
    
    return 0;
}
