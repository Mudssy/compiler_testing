
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    printf("Before comma operator: a = %d, b = %d\n", a, b);
    (a++, b++);
    printf("After comma operator: a = %d, b = %d\n", a, b);

    return 0;
}
