
#include <stdio.h>
#include "profile_rt.h"

__attribute__((noinline)) void foo() { printf("Hello, World!\n"); }

int main(void) {
  __llvm_profile_init_counters();
  
  for (int i = 0; i < 10000000; ++i) {
    foo();
  }

  return 0;
}
