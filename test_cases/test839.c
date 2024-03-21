
#include <stdio.h>
#include <stdarg.h>

int addNumbers(int n, ...) {
   va_list valist;
   int sum = 0;
   int i;

   /* Initialize valist for num number of arguments */
   va_start(valist, n);

   /* Access all the arguments assigned to valist */
   for (i = 0; i < n; i++) {
      sum += va_arg(valist, int);
   }
   
   /* Clean memory reserved for valist */
   va_end(valist);

   return sum;
}

int main() {
   printf("Sum of 2, 3, 4: %d\n", addNumbers(3, 2,3,4));
   printf("Sum of 5, 10, 15: %d\n", addNumbers(3, 5,10,15));
}
