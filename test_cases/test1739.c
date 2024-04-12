
#include <stdio.h>

inline void foo() { printf("Inline Foo\n"); }

int main(void) {
    __builtin___dump_struct((void*)&foo, (void*)((char*)&foo + sizeof(foo)));
    return 0;
}
