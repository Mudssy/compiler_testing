
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Before CHECK-LABEL\n");

// CHECK-LABEL: main_check_label
// CHECK: Before CHECK-LABEL
// CHECK-NEXT: After CHECK-LABEL
    printf("After CHECK-LABEL\n");

    return 0;
}
