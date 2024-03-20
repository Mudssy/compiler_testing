
// module_a.h
#ifndef MODULE_A_H
#define MODULE_A_H

void function_in_module_a();

#endif

// main.c
#include <stdio.h>
#include "module_a.h"  // Include module A

int main() {
    printf("This is the main function.\n");
    function_in_module_a();  // Call a function from module A
    return 0;
}

// module_a.c
#include <stdio.h>
#include "module_a.h"

void function_in_module_a() {
    printf("This is a function in Module A.\n");
}
