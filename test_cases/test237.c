
#include <stdio.h>

int main() {
    #include "double_quote_include.h"
    #include 'single_quote_include.h'

    char double_quote_literal[] = "This is a double quote literal.";
    char single_quote_literal[] = 'This is a single quote literal.';

    printf("Output from double quote include: %s\n", DOUBLE_QUOTE_INCLUDE);
    printf("Output from single quote include: %c\n", SINGLE_QUOTE_INCLUDE);
    
    printf("Double quote literal: %s\n", double_quote_literal);
    printf("Single quote literal: %c\n", single_quote_literal);

    return 0;
}
