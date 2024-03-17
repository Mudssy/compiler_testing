
#include <stdio.h>
#define N 5

int main() {
    int vect1[N] = {1,2,3,4,5};
    int vect2[N] = {6,7,8,9,10};
    int resultant_vect[2*N];
    int even = 0;  // counter for even position elements 
    int odd = 1;   // counter for odd position elements
    
    for (int i=0 ; i<2*N ; ++i) {
        if(i % 2 == 0){ // if index is even
            resultant_vect[i] = vect1[even];
            ++even;
        }else{           // if index is odd
            resultant_vect[i] = vect2[odd-1];
            ++odd;
        }
    }
    
    for(int i=0 ; i<2*N ; ++i) {
        printf("%d ",resultant_vect[i]);
    }
    return 0;
}
