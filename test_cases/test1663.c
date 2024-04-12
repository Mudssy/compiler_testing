
#include <stdio.h>

int main() {
    int num1 = -5, num2 = 7;
    
    // Testing AND operator
    printf("Testing AND operator:\n");
    if (num1 > 0 && num2 > 0) {
        printf("%d and %d are both positive.\n", num1, num2);
    } else if (num1 < 0 && num2 < 0) {
        printf("%d and %d are both negative.\n", num1, num2);
    } else {
        printf("One number is positive, the other is not.\n");
    }
    
    // Testing OR operator
    printf("\nTesting OR operator:\n");
    if (num1 > 0 || num2 > 0) {
        printf("At least one of %d and %d is positive.\n", num1, num2);
    } else {
        printf("Both numbers are negative.\n");
    }
    
    // Testing NOT operator
    printf("\nTesting NOT operator:\n");
    if (!(num1 > 0)) {
        printf("%d is negative.\n", num1);
    } else {
        printf("%d is positive.\n", num1);
    }
    
    // Testing relational operators
    printf("\nTesting relational operators:\n");
    if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d.\n", num1, num2);
    } else {
        printf("Both numbers are equal.\n");
    }
    
    return 0;
}
