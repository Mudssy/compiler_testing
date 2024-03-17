
#include <stdio.h>
int main() 
{
    #ifdef __cplusplus
        printf("This program is compiled in C++\n");
    #else
        printf("This program is NOT compiled in C++\n");
    #endif
    
    return 0;
}