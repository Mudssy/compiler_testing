
#include <stdio.h>

extern int foo(); // function from libfoo.a
extern void bar(); // function from libbar.a

int main() {
    printf("Calling foo: %d\n", foo());
    printf("Calling bar: ");
    bar();
}
