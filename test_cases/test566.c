
#include <stdio.h>

void print_data(const int *ptr) {
    printf("Data: %d\n", *ptr);  // This line should fail to compile if '*ptr' is not considered read-only inside this function
}

int main() {
    const int data = 10;
    print_data(&data);
    
    return 0;  // Make sure the program returns and doesn't run indefinitely
}
