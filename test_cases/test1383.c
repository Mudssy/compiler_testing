
#include <stdio.h>
#include <setjmp.h>
 
static jmp_buf env;   /* A static buffer for storing the execution context */
 
/* A helper function that will be called by longjmp to return control back to setjmp */
void f2(void) {
    printf("Return from longjmp\n");  /* This line is executed after a successful call to longjmp */
}
 
int main() {
    int val;
    /* A jmp_buf variable 'env' is associated with new calling environment 'f1' */
    val = setjmp(env);  
    
    printf("setjmp returned %d\n", val);
    if (val != 0) {
        return 0; /* If the return value from setjmp is not zero, then we have been jumped back and are done */
    }

    printf("Jumping\n");  

    longjmp(env, 42); /* This jumps back to the invocation of setjmp that set the jump (by val) and returns '42' */
    
    f2(); /* This will never be called because the call to longjmp above doesn't return to this point */
}
