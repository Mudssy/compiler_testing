
#include <stdio.h>

// Define the structure with some members
typedef struct {
    int data1;
    char data2;
} DataStructure;

// Function prototypes for getter and setter functions
void setData(DataStructure *ds, int value);
int getData(DataStructure *ds);

int main() {
    // Create an instance of the struct and initialize it
    DataStructure ds = {10, 'A'};
    
    printf("Initial data: %d\n", getData(&ds));  // Output should be 10
    
    setData(&ds, 20);
    printf("After setting: %d\n", getData(&ds));  // Output should be 20
    
    return 0;
}

// Implement the getter and setter functions
void setData(DataStructure *ds, int value) {
    ds->data1 = value;
}

int getData(DataStructure *ds) {
    return ds->data1;
}
