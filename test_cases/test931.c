
#include <stdio.h>

int main() {
    int x = 10;
    // CHECK-NEXT: {{.*}} x ={{ *}}{{10}};
    printf("x = %d\n", x);
}
