
#include <fenv.h>
#include <stdio.h>

int main() {
    feraiseexcept(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID);
    
    return 0;
}
