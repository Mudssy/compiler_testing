
#include <stdio.h>

int main() {
    int num = 10;
    const int cnum = num;  // declaring a constant integer
    volatile int vnum = num;  // declaring a volatile integer
    
    printf("Initial value of num = %d\n", num);
    printf("Value of constant integer is: %d\n", cnum);
    printf("Value of volatile integer is: %d\n", vnum);
    
    num = 15;  // Changing the original 'num' variable

    // Trying to change const int variable
    //cnum = num;  
    // The above line will raise an error if uncommented. We can't modify a constant variable
    
    vnum = num;  // However, we are able to modify a volatile variable

    printf("After changing num, the value of num = %d\n", num);
    printf("After changing num, value of const integer is: %d\n", cnum);
    printf("After changing num, value of volatile integer is: %d\n", vnum);
    
    return 0;
}
