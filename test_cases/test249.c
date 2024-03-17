
#include <stdio.h>

int main() {
    const char *rawString = R"delimiter(
        This is a raw string literal.
        It can contain "quotes" without being confused.
        Newlines and other characters are preserved exactly as entered.
    )delimiter";

    printf("%s\n", rawString);

    return 0;
}
