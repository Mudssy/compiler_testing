
#include <stdio.h>

#ifdef __clang__
  #define COMPILER "Clang"
#else
  #define COMPILER "Other"
#endif

int main() {
   printf("This program is compiled using %s.\n", COMPILER);
   return 0;
}
