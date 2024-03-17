
#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("You entered a positive number.\n");
    } else if (x < 0) {
        printf("You entered a negative number.\n");
    } else {
        #pragma clang diagnostic push
        #pragma clang diagnostic warning "-Wunknown-pragmas"
        #pragma remark This is a custom warning message for the llvmlibRemarks section of the compiler.
        printf("You entered zero.\n");
        #pragma clang diagnostic pop
    }
    return 0;
}
