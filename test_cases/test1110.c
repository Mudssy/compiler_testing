
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    const char* output = (a > b) ? "a is greater than b" : "b is greater or equal to a";
    printf("%s\n", output);
    return 0;
}
