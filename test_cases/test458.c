
#include <stdio.h>
#include <stdlib.h>

int main() {
    int align_data __attribute__ ((aligned (16))) = 15;
    
    if(((unsigned long) &align_data & 0xF) == 0){
        printf("Aligned\n");
    }else{
        printf("Not Aligned\n");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
