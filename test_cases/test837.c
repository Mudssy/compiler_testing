
#include <stdio.h>
#include <stdarg.h>

void vprintf(const char *format, va_list argptr) {
    vfprintf(stdout, format, argptr);
}

int main() {
    int x = 42;
    double y = 3.14;
    const char* str = "Hello, World!";

    va_list args;
    va_start(args, str);
    vprintf("%d\n", args);
    va_end(args);

    return 0;
}
