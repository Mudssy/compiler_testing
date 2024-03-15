
#include <stdio.h>

int main() {
    char *raw_string = R"(This is a raw string literal in C.\n)";
    printf("%s", raw_string);
    return 0;
}
