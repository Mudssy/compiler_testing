
#include <stdio.h>

int main(void) {
    #pragma message("Compiling " __FILE__)
    #pragma message(__DATE__)
    #pragma message(__TIME__)

    return 0;
}
