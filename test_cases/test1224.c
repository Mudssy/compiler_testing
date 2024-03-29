
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[10] = "123456789"; // Change this string as per the requirement for testing
    long int val;
    
    val = atol(str);
    
    printf("The converted number is: %ld\n", val);
    
    return 0;
}
