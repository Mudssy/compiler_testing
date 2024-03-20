
#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
typedef int (*Operation)(int, int); // Function pointer type

void printResult(Operation operation, int a, int b) { 
    printf("The result is: %d\n", operation(a, b)); 
}

int main() {
   Operation add_op = (Operation)&add;
   Operation subtract_op = &subtract; // Implicit conversion

   printResult(add_op, 5, 3);
   printResult(subtract_op, 5, 3);
   
   return 0;
}
