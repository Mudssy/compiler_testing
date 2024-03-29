
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    // Use string functions from the <string.h> library
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    int len;
    
    // Copy str1 into str3
    strcpy(str3, str1);
    printf("strcpy(str3, str1): %s\n", str3);
    
    // Concatenate str1 and str2
    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1);
    
    len = strlen(str1);
    printf("strlen(str1): %d\n", len);
    
    // Use math functions from the <math.h> library
    double x = 3.0;
    double y, z;
    int a = 5, b = 2;
    
    y = sqrt(x);  // Square root
    printf("sqrt(%lf) = %lf\n", x, y);
    
    z = pow(a, b);  // Power
    printf("%d^%d = %lf\n", a, b, z);
    
    return 0;
}
