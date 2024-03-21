
#include <stdio.h>
#define CHECK(expr) printf("CHECK: "#expr": %d\n", (int)(expr))

int main() {
    int a = 10;
    float b = 20.5;
    double c = 30.7;
    
    CHECK(a); // Expected output: CHECK: a: 10
    CHECK(b); // Expected output: CHECK: b: 20
    CHECK(c); // Expected output: CHECK: c: 30
    
    return 0;
}
