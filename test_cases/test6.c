
#include <stdio.h>

typedef struct {
    int x;
    float y;
} myStruct;

int main() {
    myStruct s;
    s.x = 10;
    s.y = 20.5;
    printf("The value of s.x is %d and the value of s.y is %.2f\n", s.x, s.y);
    return 0;
}
