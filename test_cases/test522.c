
#include <stdio.h>

// Assume 'mfoo' is in another module, so we declare it here
void mfoo(); 

int main(){
    printf("Hello, World!\n"); // call to own function
    mfoo(); // call imported module's function
    return 0;
}
