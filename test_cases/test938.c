
#include <stdio.h>
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

int main() {
    int a = 5;
    printf("a=%d\n", a);  // CHECK: a={{[0-9]+}}
  
    float b = 3.14;
    printf("b=%f\n", b);  // CHECK: b={{3.14[0-9]*}}
    
    char c = 'X';
    printf("c=%c\n", c);  // CHECK: c=X
  
    return 0;
}
