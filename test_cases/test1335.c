
#include <stdio.h>
int main() {
    FILE *file = fopen("testfile.txt", "r");
    if (file == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    
    int c;
    while ((c = getc(file)) != EOF)
        putchar(c);

    fclose(file);
    return 0;
}
