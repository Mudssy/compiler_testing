
#include <stdio.h>

int add(int num1, int num2) {
   return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

typedef int (*operation)(int, int);

int main() {
    operation operations[2] = {add, subtract};
    int choice = 0;
    
    printf("Enter 0 for addition and 1 for subtraction: ");
    scanf("%d", &choice);
    
    if (choice > 1 || choice < 0) {
        printf("Invalid operation\n");
        return -1;
    }
    
    int num1, num2, result;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = operations[choice](num1, num2);  // call the function via pointer
    printf("Result is : %d\n", result);
    
    return 0;
}
