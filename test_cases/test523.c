
#include <stdio.h>

void foo(int x) { printf("Foo called with %d\n", x); }

void bar(float y) { printf("Bar called with %f\n", y); }

int main() 
{
    int a = 10;
    
    foo(a); // Should call the foo with int argument
    
    float b = 2.5;
    
    bar(b); // Should call the bar with float argument
    
    return 0;
}
