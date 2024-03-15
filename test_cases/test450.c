
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    
    printf("Before format attribute: %d\n", n);

    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wformat"
    printf("With format attribute (ignored): %f\n", n);
    #pragma clang diagnostic pop

    return 0;
}
