
#include <stdio.h>
void function1(int x) { printf("Function1 value = %d\n", x); }
void function2() { int x = 2; function1(x); } 
int main() { function2(); return 0; }
