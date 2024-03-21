
#include <stdio.h>

void test_match_full_lines(int enable) {
    if (enable) {
        printf("Matching full lines is enabled\n");
    } else {
        printf("Matching full lines is disabled\n");
    }
}

int main() {
    // Test with match-full-lines feature enabled.
    test_match_full_lines(1);  // Enable match-full-lines.
    
    // Test with match-full-lines feature disabled.
    test_match_full_lines(0);  // Disable match-full-lines.

    return 0;  // End of the program, it returns to the operating system.
}
