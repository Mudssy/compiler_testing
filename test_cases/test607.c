
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;
    
    printf("Value of x using pointer: %d\n", *p);
    printf("Value of x using pointer to a pointer: %d\n", **pp);

    return 0;
}
