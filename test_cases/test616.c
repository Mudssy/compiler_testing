
#include <stdio.h>

int main() {
    int n = 3;
    int m = 2;

    int (*array_of_pointers)[m];
    array_of_pointers = (int(*)[m]) malloc(n * sizeof(*array_of_pointers));
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            (*array_of_pointers)[i*m + j] = (i+1)*10 + j;
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("array_of_pointers[%d][%d] = %d\n", i, j, (*array_of_pointers)[i*m + j]);
        }
    }

    free(array_of_pointers);
    
    return 0;
}
