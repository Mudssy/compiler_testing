
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    printf("a = %d, b = %d\n", a, b);
    if (a == b)
        printf("a is equal to b\n");
    else
       printf("a is not equal to b\n");
  
    if(a < b)
        printf("a is less than b\n");
    else 
        printf("a is greater or equal than b\n");
    
    if (a > b)
        printf("a is greater than b\n");
    else
       printf("a is less or equal to b\n");

    return 0;
}
