
#include <stdio.h>

int main(void) {
    int x = 10;
    int y = ({ int _x = x + 5; _x *= 2; _x; });
    
    printf("The result is: %d\n", y);
    return 0;
}
