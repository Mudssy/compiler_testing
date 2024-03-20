
#include <stdio.h>

enum color { red, green, blue };

void print_color(enum color c) 
{
    if (c == red) printf("red\n");
    else if (c == green) printf("green\n");
    else if (c == blue) printf("blue\n");
}

int main() 
{
    enum color my_color = red;
    print_color(my_color);
    
    my_color = blue;
    print_color(my_color);
    
    return 0;
}
