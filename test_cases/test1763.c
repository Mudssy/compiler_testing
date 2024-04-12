
#include <stdio.h>

int function(void *ptr) {
    __auto_type x = (*((int *) ptr)); 
    return x;
}

int main() {
    int i = 10;
    float f = 20.5;
    
    printf("Value of integer is : %d\n", function(&i));
    printf("Value of float is : %f\n", (double)function(&f));

    return 0;
}
