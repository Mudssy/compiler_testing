
#include<stdio.h>

int main() {
    // Test case 1: auto keyword
    auto int var_auto = 10;
    printf("Value of auto variable: %d\n", var_auto);
  
    // Test case 2: static keyword
    static int var_static = 20;
    printf("Value of static variable: %d\n", var_static);
    
    // Test case 3: register keyword
    register char var_register = 'A';
    printf("Value of register variable: %c\n", var_register);
    
    // Test case 4: const keyword
    const int var_const = 30;
    printf("Value of const variable: %d\n", var_const);
  
    return 0;
}
