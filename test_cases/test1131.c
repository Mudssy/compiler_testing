
#include <stdio.h>

static void my_function(char *msg) {
    puts(msg);
}

int main() {
    if (printf("Test message\n")) {}
    else {}
    
    printf("Hello World");
    my_function("This should not be displayed");

    return 0;
}
