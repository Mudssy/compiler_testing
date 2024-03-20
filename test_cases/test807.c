
#include <stdio.h>

#define MY_NUM 42
#ifdef MY_NUM
    #if MY_NUM > 100
        #undef MY_NUM
        #define MY_NUM 100
    #elif MY_NUM < 0
        #undef MY_NUM
        #define MY_NUM 0
    #endif
#else
    #define MY_NUM 50
#endif

int main() {
    printf("MY_NUM is %d\n", MY_NUM);
    return 0;
}
