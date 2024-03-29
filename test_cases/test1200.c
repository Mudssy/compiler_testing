
#include <stdio.h>
#include <string.h>
int main(){
    char str1[20]="Hello";
    char str2[] = " World!";
    
    // Concatenate str1 and str2, result is stored in str1.
    strcat(str1, str2);
    
    printf("Output String: %s\n", str1);
  
    return 0;
}
