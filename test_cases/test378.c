
#include <stdio.h>

int main() {
    int a = 5;
    printf("Before increment: %d\n", a);
    ++a;
    printf("After increment (++a): %d\n", a);
    --a;
    printf("After decrement (--a): %d\n", a);
    a++;
    printf("After increment (a++): %d\n", a);
    a--;
    printf("After decrement (a--): %d\n", a);
    return 0;
}
