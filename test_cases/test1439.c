
#include <stdio.h>

void __attribute__((noinline)) foo() { printf("Hello, World!\n"); }

int main(void) {
  void *__llvm_profile_begin_data();
  
  for (int i = 0; i < 10; ++i) {
    foo();
  }

  void *__llvm_profile_end_data();
  
  return 0;
}
