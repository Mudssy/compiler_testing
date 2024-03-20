
#include <stdio.h>

struct Point {
  int x;
  int y;
};

int main() {
  struct Point points[10]; // Array of structures
  
  for (int i = 0; i < 10; ++i) { // Initialize the elements
    points[i].x = i;
    points[i].y = i * 2;
  }
  
  for (int i = 0; i < 10; ++i) { // Print out the values
    printf("Point %d: x=%d, y=%d\n", i+1, points[i].x, points[i].y);
  }
  
  return 0;
}
