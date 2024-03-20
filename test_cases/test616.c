
#include <stdio.h>

void print_value(int* p) {
    printf("Value: %d\n", *p);
}

void print_array_values(int** arr, int size) {
    for (int i = 0; i < size; i++) {
        print_value(arr[i]);
    }
}

int main() {
    // Define some integers.
    int a1 = 5, a2 = 10, a3 = 15, a4 = 20;
    
    // Declare an array of pointers to integers.
    int* arr[4] = {&a1, &a2, &a3, &a4};
    
    // Call function to print values.
    print_array_values(arr, 4);
    
    return 0;
}
