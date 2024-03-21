
#include <stdio.h>

int main() {
    int number = 10;
    printf("The number is %d\n", number);
    
    // Testing BinPack parameters feature for clang-libFormat section of compiler
    if(number == 10) {
        printf("BinPack parameters are supported by the C language.\n");
    } else {
        printf("BinPack parameters are not supported by the C language.\n");
    }
    
    return 0; // ensures that program returns and does not run forever
}
