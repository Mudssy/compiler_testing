
#include <stdio.h>

void __attribute__((noinline)) foo(int depth) {
  if (depth > 0)
    foo(depth - 1);
}

int main() {
  void *callstack[100];
  int size = __builtin_frame_address(0) ? __builtin_return_address(0) : 0;
  
  printf("Call stack (%d frames):\n", size);
  for (int i = 0; i < size; ++i) {
    void *addr = callstack[i];
    printf("#%-2d %p\n", i, addr);
  }
  
  foo(10); // run a recursive function to fill up the stack
  
  return 0;
}
