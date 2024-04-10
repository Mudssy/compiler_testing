
#include <stdio.h>

void f(int x) { printf("f %d\n", x); }

int main() 
{
    auto int i = 1; // automatic storage duration
    static int j = 2; // static storage duration
    
    for (i = 0; i < 3; i++) 
    {
        printf("main %d\n", i);
        f(j);
    }
}
