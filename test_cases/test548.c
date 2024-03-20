
#include <stdio.h>

int main() {
    double x = 3.14;
    
    // The classification results are represented as an enum in clang
    int classify = __builtin_classify_type(x);
    
    switch (classify) {
        case 0:
            printf("The number is a NaN.\n");
            break;
        case 1:
            printf("The number is finite and not zero.\n");
            break;
        case 2:
            printf("The number is +Infinity.\n");
            break;
        case 3:
            printf("The number is -Infinity.\n");
            break;
        default:
            printf("The classification result is unknown.\n");
    }
    
    return 0;
}
