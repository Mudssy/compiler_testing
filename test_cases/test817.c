
#include <stdio.h>

/* Test Case to check the register storage class specifier feature */
int main() {
    /* Register declaration can only have automatic type */
    register int x = 10;  // 'x' is a register variable

    printf("Testing register storage class specifier: ");
    
    /* Test if we can access the register variables from outside their declared scope */
    {
        register int x = 20;  // Another 'x', this one scoped within a block
        
        /* Expected Outputs: "Register variable test passed" or "Register variable test failed" */
        printf("%s\n", (&x == &10) ? "Register variable test passed" : "Register variable test failed");  
    }  // End of the scope, 'x' is destroyed here.
    
    /* The second test case to check if register variables behave like automatic variables */
    printf("%s\n", (&x == &10) ? "Automatic variable test passed" : "Automatic variable test failed");  

    return 0;
}
