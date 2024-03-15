
#include <stdio.h>

// Declare an external variable.
extern int extVar;

int main() {
    // Display the value of the external variable.
    printf("Value of External Variable: %d\n", extVar);

    return 0;
}
