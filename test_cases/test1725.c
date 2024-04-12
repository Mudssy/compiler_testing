
#include <stdio.h>

struct Point { int x; int y; };

int main() 
{
    struct Point p = { .y = 2, .x = 1 };
    
    printf("Point has coordinates (%d, %d)\n", p.x, p.y);
    
    return 0;
}
