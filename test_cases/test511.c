
#include <sanitizer/common_interface_defs.h>
#include <stdio.h>

void __attribute__((noinline)) foo(int depth) {
  if (depth > 0)
    foo(depth - 1);
}

int main() {
  u32 callstack[100];
  int size = __sanitizer_get_shadow_call_stack(callstack, sizeof(callstack)/sizeof(*callstack));
  
  printf("Call stack (%d frames):\n", size);
  for (int i = 0; i < size; ++i)
    printf("#%2d %p\n", i, __builtin_return_address(callstack[i] - 1));
  
  return 0;
}
