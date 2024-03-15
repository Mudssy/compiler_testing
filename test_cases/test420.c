
#include <stdio.h>

typedef struct {
    int a;
    float b;
} custom_type;

int main() {
    custom_type myVar;
    myVar.a = 10;
    myVar.b = 20.5;
    
    printf("myVar.a: %d\n", myVar.a);
    printf("myVar.b: %.1f\n", myVar.b);
    
    return 0;
}
