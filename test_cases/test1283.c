
#include <stdarg.h> // Contains va_start, va_end macros and type definitions

int add_nums(int count,...) { 
   int result = 0;

   va_list ap;
   va_start(ap, count);         // Initializes the argument list.
   
   for(int i = 0; i < count; ++i) {
      result += va_arg(ap, int);    // Gets next argument value.
   }
   
   va_end(ap);                  // Clean up.
   
   return result;
}

int main() {
  printf("%d\n", add_nums(3, 10, 20, 30)); // should output "60"
  printf("%d\n", add_nums(5, 10, 20, 30, 40, 50)); // should output "150"
}
