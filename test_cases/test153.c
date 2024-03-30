
#include <stdio.h>

void print_int(int i){
    printf("You passed %d\n", i);
}

void print_double(double d){
    printf("You passed %f\n", d);
}

void print_charptr(char *s){
    printf("You passed '%s'\n", s);
}

#define print(X) _Generic((X), \
int: print_int, \
double: print_double, \
default: print_charptr)(X)

void functionToTest(){
  int i = 42;
  double d = 3.14;
  char *s = "Hello, world!";

  print(i);  // You passed 42
  print(d);  // You passed 3.140000
  print(s);  // You passed 'Hello, world!'
}
