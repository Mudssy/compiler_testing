
#include <stdio.h>

typedef int my_int; // defining a new type

void print(my_int num) { 
    printf("Number is: %d\n", num); // printing using defined type
}

int main() {
    my_int number = 10; // initializing using defined type

    print(number); // calling function with defined type

    return 0;
}
