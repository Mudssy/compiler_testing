
#include <stdio.h>

int main() {
   int result = 0;
   
   int nestedFunction(int a) {
      return a * 2;
   }

   result = nestedFunction(5);

   printf("Result: %d\n", result);

   return 0;
}
