
#include <stdio.h>

int main() {
    int num1, num2;

    // Testing the AND operator
    num1 = 30;
    num2 = 55;
    if(num1 && num2) printf("Line 1 - Condition is true\n");
    else printf("Line 1 - Condition is not true\n");
    
    // Testing the OR operator
    num1 = 0;
    num2 = -7;
    if(num1 || num2) printf("Line 2 - Condition is true\n");
    else printf("Line 2 - Condition is not true\n");
    
    // Testing the NOT operator
    num1 = 0;
    if(!num1) printf("Line 3 - Condition is true\n");
    else printf("Line 3 - Condition is not true\n");
    return 0;
}
