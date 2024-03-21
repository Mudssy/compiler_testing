
#include <stdio.h>

int main(void) {
    int a = 1;
    int b = (a > 0 ? 2 : (break, 3));
    
    printf("Value is %d\n", b);
    return 0;
}
