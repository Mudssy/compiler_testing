
#include <stdio.h>

void print_line(int line) {
    printf("Line number: %d\n", line);
}

int main() {
    print_line(__LINE__ - 1);
    print_line(__LINE__);
    print_line(__LINE__ + 1);

    return 0;
}
