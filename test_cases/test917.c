
#include <stdio.h>
int main() {
    int size = 5; // VLA size
    int array[size]; // VLA declaration
    
    for(int i=0; i<size; i++) {
        array[i] = i*10; 
    }
    
    for(int i=0; i<size; i++) {
        printf("%d\n",array[i]); // should print: 0, 10, 20, 30, 40
    }
    
    return 0;
}
