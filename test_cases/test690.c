
#include <stdio.h>

typedef int my_int;
typedef char *my_char_ptr;
typedef struct {
    int x;
    float y;
} my_struct;

void print_using_type(my_int i, my_char_ptr str, my_struct s) {
    printf("my_int: %d\n", i);
    printf("my_char_ptr: %s\n", str);
    printf("my_struct.x: %d\n", s.x);
    printf("my_struct.y: %f\n", s.y);
}

int main() {
    my_int i = 10;
    my_char_ptr str = "Hello, World!";
    my_struct s = {20, 3.14};
    
    print_using_type(i, str, s);
    
    return 0;
}
