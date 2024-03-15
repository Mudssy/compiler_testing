
#include <stdio.h>

union u {
  int a;
  float b;
};

int main() {
  union u my_union = { .a = 10 };
  printf("Initial value: %d\n", my_union.a);
  
  my_union.b = 20.5f;
  printf("After b assignment: %f\n", my_union.b);

  my_union.a = 30;
  printf("After a assignment: %d\n", my_union.a);
  
  return 0;
}
