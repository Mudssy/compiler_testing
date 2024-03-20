
#include <stdio.h>
#include <string.h>

struct __attribute__((packed)) Test {
    char c;
    int i;
};

int main() {
    struct Test t;
    printf("Size of 'Test' is %zu\n", sizeof(t));
    
    return 0;
}
