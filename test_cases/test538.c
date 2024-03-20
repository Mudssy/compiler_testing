
#include <stdio.h>

typedef struct { int x; int y; } Point;

int main()
{
    printf("sizeof(Point) = %zu\n", __builtin_object_size(struct { int x; int y; }, 0));
    return 0;
}
