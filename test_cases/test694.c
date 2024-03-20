
#include <stdio.h>

int main() {
    printf("Hello World\n"); // Test standard library functions
    
    int var = 10; // Test variable declaration and assignment
    printf("%d\n", var); 

    if(var > 5) { // Test control flow statements (if statement)
        printf("Variable is greater than 5\n"); 
    } else {
        printf("Variable is not greater than 5\n");
    }
    
    for(int i = 0; i < 5; i++) { // Test looping constructs (for loop)
        printf("%d ", var+i);
    }
    printf("\n");
  
    return 0; 
}
