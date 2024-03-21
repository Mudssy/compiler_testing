
#include<stdio.h>

typedef int MyInt;
typedef char* MyString;

void printMyType(MyInt i, MyString s) {
    printf("Integer is %d\n", i);
    printf("String is %s\n", s);
}

int main() {
    MyInt my_int = 10;
    MyString my_string = "Hello World";
    
    printMyType(my_int, my_string);
    
    return 0;
}
