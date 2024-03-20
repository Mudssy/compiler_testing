
#include <stdio.h>

int main(void) {
    int num1 = 5;
    int num2 = 7;

    if (num1 == num2){
        printf("Equal\n");
    } else {
        printf("Not Equal\n");
    }
    
    if (num1 != num2){
        printf("Not Equal\n");
    } else {
        printf("Equal\n");
    }

    if (num1 < num2){
        printf("%d is less than %d\n", num1, num2);
    } else {
        printf("%d is not less than %d\n", num1, num2);
    }

    if (num1 > num2){
        printf("%d is greater than %d\n", num1, num2);
    } else {
        printf("%d is not greater than %d\n", num1, num2);
    }
    
    if (num1 <= num2){
        printf("%d is less than or equal to %d\n", num1, num2);
    } else {
        printf("%d is not less than or equal to %d\n", num1, num2);
    }
    
    if (num1 >= num2){
        printf("%d is greater than or equal to %d\n", num1, num2);
    } else {
        printf("%d is not greater than or equal to %d\n", num1, num2);
    }
    
    return 0;
}
