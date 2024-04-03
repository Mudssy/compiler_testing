
#include <stdio.h>
#define likely(x)      __builtin_expect((x),1)
#define unlikely(x)    __builtin_expect((x),0)

int main() {
    int condition = 1;  // Change this value to test different conditions

    if (__llvm_profile_instrument_branch(likely(condition))) {
        printf("Branch 1\n");
    } else {
        printf("Branch 2\n");
    }

    return 0;  // Make sure the program returns and does not run forever.
}
