
#include <stdio.h>

int main() {
    int i = 10;
    double d = (double)i; // explicit conversion from int to double
    
    printf("Double value is %f\n", d); 

    char c = 255; // implicit conversion from int to char
    printf("Char value is %d\n", c);  

    return 0; // returning a proper result
}
