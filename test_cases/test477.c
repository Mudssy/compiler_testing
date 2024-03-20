
#include <stdarg.h>
#define _Vectorcall_ __attribute__((vectorcall))

void vectorCallFunc() {}

typedef void(*Vectorcall)(void);

int _Vectorcall_ vectorcall_add(double a, double b) {
    return a + b;
}

void _Vectorcall_ myVectorCallFunction(char *str, ...) {
    va_list argp;
    va_start(argp, str);

    char* s = str;
    while (s != NULL) {
        printf("%s\n", s);
        s = va_arg(argp, char *);
    }
    
    va_end(argp);
}

int main() {
    Vectorcall fptr = vectorCallFunc;
    void (*fptr2)(void) = &vectorCallFunc;

    // Call the function through function pointer.
    (fptr)();
    (*fptr2)();
    
    int a = 10, b = 5;
    printf("%d\n", vectorcall_add(a, b)); // prints 15
  
    myVectorCallFunction("Hello", "World!", NULL);

    return 0;
}
