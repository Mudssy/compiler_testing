
#ifndef TEST_HEADER_H
#define TEST_HEADER_H

#include <stdio.h>

void hello(); // forward declaration

#endif

// Implementation in a separate .c file
void hello() {
    printf("Hello, World!\n");
}
