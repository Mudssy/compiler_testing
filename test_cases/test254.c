
#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
 
static jmp_buf exitJmpEnv;
 
void func(void) {
    longjmp(exitJmpEnv,1);
}
 
int main() {
   if (setjmp(exitJmpEnv) == 0) {
       func(); // calls function that will never return.
   } else {
      printf("This print statement will never be reached.\n");
   }
   return EXIT_SUCCESS;
}
