
#include <stdio.h>

typedef struct { int x; int y; } Point;

int main()
{
    printf("sizeof(Point) = %zu\n", sizeof(struct { int x; int y; }));
    return 0;
}
