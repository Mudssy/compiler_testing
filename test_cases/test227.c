
#include <stdio.h>

// Object-like macro that defines the tokens for a symbol name
#define FOO(x) #x  // convert the argument to a string literal
#define BAR b      // define another token

int main() {
    printf("%s\n", FOO(BAR));  // concatenate and print "b"
}
