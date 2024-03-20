
#include <stdio.h>

void foo(char* __attribute__((nonnull)) s) {
    printf("%s\n", s);
}

int main() {
    char *s = NULL;
    
    /* The following line will give a compile-time error if the nonnull attribute is not supported. */
    foo(s); 

    return 0;
}
