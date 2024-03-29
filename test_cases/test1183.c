
#include <stdio.h>

int main() {
    #include "rename_test.h" // This will fail to find rename_test.h, and the compiler should not replace this with anything automatically
    printf("Successfully included renamed header file\n");
    return 0; // The program ends here, so it does not run indefinitely
}
