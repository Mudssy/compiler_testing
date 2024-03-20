
#include <stdio.h>

// Declare weak symbols (global variables)
extern int foo() __attribute__((weak));
extern int bar() __attribute__((weak));

int main(void){
    if(&foo != NULL && &bar == NULL){
        printf("Weak Attributes: Supported\n");
    } else {
        printf("Weak Attributes: Not supported\n");
    }
}
