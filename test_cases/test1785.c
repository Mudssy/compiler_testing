
#include <stdio.h>
int main(){
    int array[5];
    int i;
    for(i = 0; i <= 10; ++i){ // This loop attempts to access index 10, which is beyond the allocated size of 5.
        array[i] = i * 2;
    }
    return 0;
}
