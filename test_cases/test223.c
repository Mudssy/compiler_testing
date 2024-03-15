
#include <stdio.h>

int main() {
    int i = 42;
    long l = 42L;
    long long ll = 42LL;
    unsigned int ui = 42U;
    unsigned long ul = 42UL;
    unsigned long long ull = 42ULL;
    
    printf("Integer sizes: %d, %ld, %lld, %u, %lu, %llu\n", i, l, ll, ui, ul, ull);
    
    float f = 3.14F;
    double d = 3.14;
    long double ld = 3.14L;
    
    printf("Floating-point sizes: %f, %lf, %Lf\n", f, d, ld);
    
    return 0;
}
