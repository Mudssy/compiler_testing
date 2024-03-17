
#include <stdio.h>

int main() {
    printf("This line should print.\n");
    // CHECK-EMPTY: 
    printf("This line should NOT print if empty line after the directive is detected by FileCheck.\n");
    return 0;
}
