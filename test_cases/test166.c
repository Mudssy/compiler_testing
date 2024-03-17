
#include <stdio.h>

typedef struct {
    int data;
} MyStruct;

void printMyStruct(const MyStruct* my_struct) {
    printf("Data: %d\n", my_struct->data);
}

int main() {
    MyStruct my_struct = { .data = 10 };
    
    // Call friend function
    printMyStruct(&my_struct);
    
    return 0;
}
