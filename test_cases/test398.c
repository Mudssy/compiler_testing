
#include <stdio.h>

void hello(const char *name) {
    printf("Hello %s\n", name);
}

void goodbye(const char *name) {
    printf("Goodbye %s\n", name);
}

int main() {
    void (*functions[2])(const char*);
    functions[0] = hello;
    functions[1] = goodbye;

    functions[0]("World");  // Prints "Hello World"
    functions[1]("People"); // Prints "Goodbye People"

    return 0;
}
