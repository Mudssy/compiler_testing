
#include <stdio.h>

int main() {
    printf("CHECK-LABEL: main\n");
    printf("CHECK: \"main\"\n");
    printf("CHECK-NEXT: \"some specific output\"\n");
    return 0;
}
