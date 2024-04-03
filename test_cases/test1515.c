
#include <stdio.h>
int f() { return 42; }
void g(int* p) { }
int main() {
    int a[] = { 1, 2 };
    int i = 0;
    a[i] = i++;
    printf("%d\n", (f(), f())); // the parenthesis force function calls to be rvalues
    g(&a[i]); // this is fine because '&' produces an rvalue
    g((int*)a); // and so is casting, but this does not compile in C++ due to strict aliasing rules
    printf("%d\n", ++f()); // you can't do (++f())++ for the same reason
}
