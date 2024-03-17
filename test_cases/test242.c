
#include <stdio.h>
#include <stdarg.h>

#define TEST_MACRO(fmt, ...) do { \
    printf("%s", "Printing: "); \
    printf(fmt, __VA_ARGS__); \
} while (0)

int main() 
{
    TEST_MACRO("%s\n", "Hello, world!");
    
    return 0;
}
