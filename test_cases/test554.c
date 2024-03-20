
#include <stdio.h>

void func(int n) {
    int i;

    #pragma GCC optimize ("-Ofast") // Clang supports this too
    for (i=0; i<n*100000000; ++i); 
    ++i;
    printf("After first loop, i is %d\n", i);

    #pragma GCC optimize ("-Os") // Clang supports this too
    for (i=0; i<n*100000000; ++i) {
        if(i > n*900000000) break;
        ++i;
    }
    ++i;
    printf("After second loop, i is %d\n", i);
}
