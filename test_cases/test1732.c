
#include <stdio.h>
#include <string.h>

int main() {
    int i = 42;  // an integer
    float f = 3.14f;  // a floating point number
    double d = 2.71828;  // a double precision floating point number
    char c = 'A';  // a character
    char s[20] = "Hello, World!";  // a string
    
    printf("Serialized integer: %d\n", i);
    printf("Serialized float: %f\n", f);
    printf("Serialized double: %lf\n", d);
    printf("Serialized char: %c\n", c);
    printf("Serialized string: %s\n", s);
    
    return 0;
}
