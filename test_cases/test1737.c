
#include <stdarg.h>
#include <stdio.h>

int add_nums(int count,...) {
   int result = 0;

   va_list ap;
   va_start(ap, count);
   
   for (int j = 0; j < count; j++){
       result += va_arg(ap, int);
   }

   va_end(ap);
   return result;
}

int mul_nums(int count,...) {
   int result = 1;

   va_list ap;
   va_start(ap, count);
   
   for (int j = 0; j < count; j++){
       result *= va_arg(ap, int);
   }

   va_end(ap);
   return result;
}

int main(){
   printf("Sum: %d\n",add_nums(4, 25,30,15,7));
   printf("Product: %d\n",mul_nums(4, 25,30,15,7));
}
