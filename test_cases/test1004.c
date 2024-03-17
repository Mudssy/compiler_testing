
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    
    printf("Before assignment: a = %d, b = %d\n", a, b);
    
    a += b; // Using the assignment operator with '+='
    b -= a; // Using the assignment operator with '-='

    printf("After assignment: a = %d, b = %d\n", a, b);

    return 0;
}
