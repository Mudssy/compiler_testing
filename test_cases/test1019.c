
#include <stdio.h>

typedef struct 
{
    int x;
    int y;
} Point;

Point createPoint(int x, int y)
{
    return (Point){x, y}; // Initializer list breaking feature test
}

void printCoordinates(Point pt)
{
    printf("X: %d\n", pt.x);
    printf("Y: %d\n", pt.y);
}

int main() 
{
    Point point = createPoint(5, 10); // Create a new point
    printCoordinates(point); // Print the coordinates of the point
  
    return 0;
}
