
#include <stdio.h>
int main() {
    int x = 5;
    
    printf("Initial value of x = %d\n", x);

    //Testing Post Increment (x++)
    printf("After post increment, x is now %d\n", x++);
    printf("Value of x after post increment is %d\n", x);
    
    //Resetting the value for next test
    x = 5;

    //Testing Pre Increment (++x)
    printf("After pre increment, x is now %d\n", ++x);
    printf("Value of x after pre increment is %d\n", x);

    //Resetting the value for next test
    x = 5;
    
    //Testing Post Decrement (x--)
    printf("After post decrement, x is now %d\n", x--);
    printf("Value of x after post decrement is %d\n", x);

    //Resetting the value for next test
    x = 5;
    
    //Testing Pre Decrement (--x)
    printf("After pre decrement, x is now %d\n", --x);
    printf("Value of x after pre decrement is %d\n", x);

    return 0;
}
