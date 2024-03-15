
#include <stdio.h>

int main() {
    char c1 = 'A';
    char c2 = '\101'; // Octal representation of character 'A'
    
    if(c1 == c2) {
        printf("Character constants feature is supported and works as expected.\n");
    } else {
        printf("Character constants feature is not working correctly.\n");
    }
    
    return 0;
}
