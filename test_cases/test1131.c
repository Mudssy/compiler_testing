
#include <stdio.h>
#include <stdnoreturn.h>

void my_function(char *msg) noreturn {
    puts(msg);
}

int main() {
    my_function("Hello World");

    return 0;
}
