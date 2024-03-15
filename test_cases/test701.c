
#include <stdio.h>

int main() {
    int a = 5;
    int b __attribute__((annotate("This is an annotation"))) = 10;
    
    printf("Without annotation: %d\n", a);
    printf("With annotation: %d\n", b);
    
    return 0;
}
