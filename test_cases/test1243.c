
#include <stdio.h>

int main() {
    long double myNum = 1234567890.12345;  // Decimal number with a fractional part
  
    printf("Original Number: %Lf\n", myNum);  // Print original number
    
    /*
      The labs function returns the absolute value of a long int type variable. 
      Here, we are using it on the fractional part (after decimal point) to get integer value.
      This feature is specific to some C compilers and may not be supported in all compilers or versions.
    */
    printf("Absolute Value of Fractional Part: %ld\n", labs((long int)(myNum * 10000) % 10000)); // Print fractional part as a long integer 
  
    return 0;
}
