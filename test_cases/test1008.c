
#include <stdio.h>

int main() {
    int x;
    x = add(5, 3);
    printf("The sum is: %d\n", x);
    return 0;
}

int add(a, b)
   int a,b;
{
   return a + b;
}
