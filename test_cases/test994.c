
#include <stdio.h>

void __attribute__((noinline, noclone)) foo(void) {
    printf("Epilogue\n");
}

int main() {
    printf("Prologue\n");
    foo(); // This will be the epilogue in your compiler
    return 0; // Return statement to exit cleanly and avoid infinite looping.
}
