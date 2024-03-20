
#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 4;
    
    // Create and initialize a two dimensional array
    int arr[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++) {
            arr[i][j] = i*j;
        }
    }
    
    // Print the array to stdout
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++) {
            printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
        }
    }
    
    return 0; // Returns successfully
}
