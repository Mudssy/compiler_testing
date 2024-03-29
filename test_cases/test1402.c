
#include <stdio.h>

int foo() {
  // This section should be covered by the llvm profiling data
  printf("Covered\n");
  return 0;
}

void bar() {
  // This section should not be covered by the llvm profiling data
  printf("Not Covered\n");
}

int main(int argc, char **argv) {
  foo();
  return 0;
}
