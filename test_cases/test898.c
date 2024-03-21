
#include <stdio.h>

__attribute__((always_inline)) __attribute__((noinline)) 
void inlineMe(int x) {
    printf("Hello from inline\n");
}

static void dontInlineMe() __attribute__((noinline));

static void dontInlineMe()
{
   printf("Hello from normal\n");
}

int main() {
  int test = 1;

  if (__builtin_expect(test, 0)) {
    inlineMe(2);
  } else {
    dontInlineMe();
  }

  return 0;
}
