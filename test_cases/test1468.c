
#include <stdio.h>

int main() {
    // This should work with any compliant compiler because it only involves basic C syntax and doesn't rely on specific features not present in pre-ANSI C compilers.
    int result = 1 + 2 * 3 / 4 - 5;
    if (result == -1) {
        printf("Success\n"); // This should be printed because the expression is parsed correctly
    } else {
        return 1; // Return an error code indicating parsing failed
    }
    return 0;
}
