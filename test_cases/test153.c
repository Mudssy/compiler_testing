
#include <stdio.h>

void print(int i){
    printf("You passed %d\n", i);
}

void print(double d){
    printf("You passed %f\n", d);
}

void print(char *s){
    printf("You passed '%s'\n", s);
}

int main(){
    int i = 42;
    double d = 3.14;
    char *s = "Hello, World!";
    
    print(i);
    print(d);
    print(s);
    
    return 0;
}
