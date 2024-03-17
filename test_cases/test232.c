
#include <stdio.h>

#ifdef MY_PRAGMA
    #pragma mypragma define "Hello from the #pragma operator"
#else
    #define MY_PRINTF(fmt, ...) printf("Compiler does not support _Pragma operator")
#endif 

int main() {
    MY_PRINTF("%s\n", MY_PRAGMA);
    return 0;
}
