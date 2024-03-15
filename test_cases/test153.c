
#include <stdio.h>

int func(int a) {
  return a * 2;
}

int func(float b) {
  return (int)(b * 3);
}

int main() {
  int x = func(5);
  int y = func(6.0f);
  
  printf("Result for func(5): %d\n", x);
  printf("Result for func(6.0f): %d\n", y);

  return 0;
}
