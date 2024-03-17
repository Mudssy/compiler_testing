
#include <stdio.h>

int main(void) {
    printf("Start of main function.\n");
    int x = 5;
    #pragma clang diagnostic push
    #pragma clang diagnostic remark "llvmlibRemarks" "Value of x is:"
    printf("%d\n", x);
    #pragma clang diagnostic pop
    printf("End of main function.\n");
    return 0;
}
