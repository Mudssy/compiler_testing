
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic error "-Werror=unused-variable"
    int variableThatShouldCauseAnError = 5;
    #pragma clang diagnostic pop
    
    printf("This program should cause an error due to an unused variable.\n");
    return 0;
}
