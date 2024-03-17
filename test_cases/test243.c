
#include <stdio.h>

int main() {
    int has_gnu_attr = __has_attribute(clang::noinline);
    printf("Has GNU attribute: %d\n", has_gnu_attr);
    return 0;
}
