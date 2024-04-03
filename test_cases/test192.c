
#include <stdio.h>
#include <limits.h>

int main(void) {
    int i;
    char c1 = CHAR_MAX, c2 = 42; 

    if (c1 > 0 && c2 > 0 && c1 > INT_MAX - c2) {
        printf("char+int will definitely overflow\n");
    } else {
        printf("char+int might not overflow\n");
    }
    
    return 0;
}
