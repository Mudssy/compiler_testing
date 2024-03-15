
#include <stdio.h>

#define MODULE_NAME "MyModule"
#define EXPORT __attribute__((visibility("default")))

extern void print_module_name() EXPORT;

int main() {
    print_module_name();
    printf(" has been imported and used successfully.\n");
    return 0;
}
