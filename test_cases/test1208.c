
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int n = 3; // number of characters to compare

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 
    
    int result = strncmp(str1, str2, n);

    if (result == 0) {
        printf("The first %d characters of both strings are equal\n", n);
    } else if (result > 0) {
        printf("The first string is greater than the second one in the first %d characters\n", n);
    } else {
        printf("The first string is less than the second one in the first %d characters\n", n);
    }

    return 0;
}
