
#include <stdarg.h>
#include <stdio.h>

void testVaCopy(int num, ...) {
    va_list args1;
    va_start (args1, num);
 
    va_list args2;
    va_copy (args2, args1);
    
    int i = va_arg (args1, int);
    printf ("i: %d\n", i);
    
    double d = va_arg (args2, double);
    printf ("d: %f\n", d);
}

int main() {
    testVaCopy(2, 42, 3.14);
    return 0;
}
