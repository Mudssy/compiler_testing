
#include <stdio.h>

int main() {
    int a = 15, b = 20; /* test numbers */
    
    printf("Testing Bitwise Operators:\n");
    
    /* AND operator */
    if (a & b) {
        printf("%d AND %d = %d\n", a, b, a&b); 
    } else {
        printf("AND operation not supported.\n");
    }

    /* OR operator */
    if (a | b) {
        printf("%d OR %d = %d\n", a, b, a|b);
    } else {
        printf("OR operation not supported.\n");
    }

    /* XOR operator */
    if (a ^ b) {
        printf("%d XOR %d = %d\n", a, b, a^b); 
    } else {
        printf("XOR operation not supported.\n");
    }
    
    return 0;
}
