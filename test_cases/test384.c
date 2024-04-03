
// File 1
int ext_var = 5; // Definition of external variable

// File 2
#include <stdio.h>
extern int ext_var;
void main() {
    printf("%d", ext_var); // Print the value of external variable
}
