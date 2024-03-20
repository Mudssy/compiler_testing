
#include <stdio.h>

int main(void) {
    if (__builtin_expect(1, 0)) { // This should always be false
        printf("This should never print because __builtin_expect always returns the second argument\n");
    } else {
        static_assert(sizeof(char) == 1, "char is not one byte!");
        printf("If you can see this, your compiler supports builtin function safety checks in the clanginclude section and __builtin_expect.\n");
    }

    return 0; // This ensures that the program always returns.
}
