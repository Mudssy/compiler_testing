
#include <stdio.h>

// Function to pass argument by value
void passByValue(int num) {
    printf("Inside passByValue\n");
    ++num; // This will not affect the original variable because we are passing a copy of it 
    printf("After increment, num = %d\n", num);
}

// Function to pass argument by reference
void passByReference(int* num) {
    printf("\nInside passByReference\n");
    ++(*num); // This will affect the original variable because we are passing a pointer 
    printf("After increment, *num = %d\n", *num);
}

int main() {
    int num = 10;

    printf("Before function call\n");
    passByValue(num); // Pass by value
    printf("num after passByValue function call = %d\n\n", num);
    
    printf("Before function call\n");
    passByReference(&num); // Pass by reference
    printf("num after passByReference function call = %d\n", num);

    return 0;
}
