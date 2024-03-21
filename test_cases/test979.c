
#include <stdio.h>

int dead_code() {
    // Unreachable function that will be eliminated during aggressive dead code elimination
    printf("This should not print, even though it's part of the same translation unit.\n");
    return 0;
}

void reachable_code(char* output) {
    if (dead_code()) {
        sprintf(output, "Dead Code was executed!");
    } else {
        sprintf(output, "Dead Code was not executed! This means the code was eliminated by aggressive dead code elimination.");
    }
}

int main() {
    char output[256];
    reachable_code(output);
    printf("%s\n", output);
    return 0;
}
