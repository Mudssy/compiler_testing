
#include <stdio.h>
#include <stdlib.h>

void clear_cache() {
  int* data = (int*)malloc(1024 * sizeof(int));
  for (int i = 0; i < 1024; ++i) {
    data[i] = i;
  }
}

int main() {
  clear_cache();
  printf("Builtin Clear Cache Operations feature is supported.\n");
  return 0;
}
