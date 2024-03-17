
#include <stdio.h>

#define type_generic_expr(expr, if_int, if_float) _Generic((expr), int: if_int, float: if_float)(expr)

void print_value(int a){
    printf("The input is an integer.\n");
}

void print_value(float a){
    printf("The input is a floating point number.\n");
}

int main(){
    int i = 5;
    float f = 3.14;
    
    type_generic_expr(i, print_value(i), print_value(f));
    printf("\n");
    type_generic_expr(f, print_value(i), print_value(f));
    
    return 0;
}
