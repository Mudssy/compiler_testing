
#include <stdio.h>

int main() {
  #ifdef __STDC_VERSION__
    printf("Compiler defines standard C version %ld\n", __STDC_VERSION__);
  #else
    printf("Compiler doesn't define a specific standard C version\n");
  #endif
  
  return 0;
}
