
#include <stdio.h>

_Noreturn void function() {
    printf("This message should not appear in the output.\n");
}

int main() {
    function();
    printf("The _Noreturn feature has completed successfully.\n");
    return 0;
}
