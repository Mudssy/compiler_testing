
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
    // CHECK: a:5
    printf("a:%d\n", a);
    
    // CHECK: b:10
    printf("b:%d\n", b);
    
    return 0;
}
