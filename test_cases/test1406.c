
#include <stdio.h>

__attribute__((noinline)) int branchy(int x, int y) {
  if (x < y) {
    return 1;
  } else {
    __builtin_expect(x > y, 0);
    return 2;
  }
}

int main() {
  for (int i = 0; i < 1000; ++i) printf("%d ", branchy(i % 5, i % 7));
  return 0;
}
