
#include <stdio.h>

int main() {
    // Variable declaration statement
    int num1 = 5, num2 = 7;
    
    // If-else statements
    if (num1 > num2) {
        printf("num1 is greater than num2\n");
    } else {
        printf("num1 is not greater than num2\n");
    }

    // For loop statement
    int sum = 0;
    for(int i=1; i<=5; i++) {
        sum += i;
    }
    printf("Sum of 1 to 5 is %d\n", sum);
    
    return 0; // Terminates program successfully
}
