
#include <stdio.h>

int main() {
    printf("; CHECK-LABEL: main\n");
    printf("; CHECK: Hello, FileCheck!\n");
    printf("Hello, FileCheck!\n");
    
    return 0;
}
