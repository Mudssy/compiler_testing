
#include <stdio.h>

enum Fruit { Apple, Orange };

int main() {
    enum Fruit fruit = Apple;
    
    // Check if the conversion is type-safe
    if (fruit == Apple) {
        printf("Conversion is successful\n");
    } else {
        printf("Conversion failed\n");
    }
    
    return 0;  // Return from the main function to avoid running forever.
}
