
#include <stdio.h>

int main() {
    char c;
  
    printf("Enter character: ");
    c = getchar();

    printf("\nEntered character is: ");
    putc(c, stdout);
    
    fflush(stdin);  // Flushing the input buffer.

    return 0;
}
