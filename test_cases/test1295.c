
#include <stdio.h>
#include <fenv.h>

void catch_fe(unsigned excepts) {
    if (fetestexcept(FE_OVERFLOW)) {
        printf("Overflow Exception Raised\n");
    } else if (fetestexcept(FE_UNDERFLOW)) {
        printf("Underflow Exception Raised\n");
    } else {
        printf("Unknown Exception Raised\n");
    }
}

int main() {
    fexcept_t except;
    
    // Enable overflow and underflow exceptions
    feraiseexcept(FE_OVERFLOW | FE_UNDERFLOW);
    
    // Set the flags to trigger these exceptions
    fesetexceptflag(&except, FE_OVERFLOW | FE_UNDERFLOW);

    catch_fe(except.flags);
    
    return 0;
}
