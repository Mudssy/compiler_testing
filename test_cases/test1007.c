
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    printf("Initial value of a: %d\n", a);
    
    (*ptr)++;
    printf("Value of a after (*ptr)++: %d\n", a);
    
    int b = 20;
    ptr = &b;
    printf("Value of a after reassigning ptr to b: %d\n", a);
    
    return 0;
}
