
#include <stdio.h>

void __attribute__((noinline, no_sanitize("memory"))) func(int *p) {
    printf("%d\n", *p);  // This should not be sanitized by memory sanitizer.
}

int main() {
    int x = 42;
    func(&x);
    return 0;   // Make sure the code returns. It will not run forever.
}
