
// RUN: %clang -I%S/Inputs/PR32819-api-notes -x c /dev/null -fsyntax-only -Xclang -verify \
// RUN:        -Xclang -verify-ignore-unexpected=note,warning -include %s \
// RUN:        | FileCheck --check-prefix=CHECK-PR32819 %s 

// CHECK-PR32819: clanglibAPINotes { "printf" : [{ "name" : "custom_print", "available" : true }] }

#include <stdio.h>

int main(void) {
    custom_print("Hello World\n");
    return 0;
}
