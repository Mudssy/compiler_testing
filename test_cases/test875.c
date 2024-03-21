
#include <stdio.h>

__attribute__((annotate("llvm.remarks")))
void testFunction() {
    printf("Testing By source file or function feature\n");
}

int main(int argc, char **argv) {
    testFunction();
    return 0; // making sure that the program returns
}
