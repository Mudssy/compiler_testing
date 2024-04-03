
#include <stdio.h>

void print_identifier(int x) {
    printf("Identifier: %d\n", x);
}

int main() {
    int _ = 42;  // valid identifier which starts with underscore
    int while_ = 10;  // valid identifier which is a keyword
    int int_ = 5;  // valid identifier which is a keyword
    print_identifier(_);
    print_identifier(while_);
    print_identifier(int_);
    return 0;
}
