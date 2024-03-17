
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

// Function to merge two vectors into one
void* vect_merge(int *v1, int n1, int *v2, int n2) {
    int i;
    int *res = malloc((n1 + n2)*sizeof(*res));
    
    #pragma omp parallel for 
    for (i = 0; i < n1+n2; ++i){
        if(i<n1) res[i]=v1[i]; 
        else res[i]=v2[i-n1];
    }
    
    return res;
}

// Function to print a vector
void print_vect(int *v, int size) {
    int i;
    printf("{");
    for (i = 0; i < size-1; ++i){
        printf("%d, ", v[i]);
    }
    if(size != 0) printf("%d", v[size - 1]);
    printf("}\n");
}

// Main function to test the merge function
int main() {
    int v1[] = {1,2,3};
    int v2[] = {4,5,6,7};
    
    int *v_res;
    v_res = vect_merge(v1, 3, v2, 4);
    
    print_vect(v_res, 7);

    free(v_res);

    return 0;
}
