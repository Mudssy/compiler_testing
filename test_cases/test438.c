
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int size;
    double data[]; // flexible array member
} FlexArray;

int main() {
    FlexArray *fa = malloc(sizeof(FlexArray) + 5*sizeof(double)); 
    fa->size = 5;
    
    for (int i=0; i<fa->size; ++i) // populate the array with some values
        fa->data[i] = i * 1.1;

    printf("Values in the FlexArray:\n");
    for (int i=0; i<fa->size; ++i) {
       printf("%f\n", fa->data[i]);
    }
    
    free(fa); // don't forget to free allocated memory
    
    return 0;
}
