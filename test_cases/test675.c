
#include <stdio.h>
void foo(int x) {
  if (x > 0) printf("Hello, World!\n");
}
int main() {
  foo(-1);
  return 0;
}
